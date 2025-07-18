// C++ program for insertion and
// deletion in Circular Queue
#include <iostream>
using namespace std;

class Queue {
private:
    int *arr;        
    int front, size; 
    int capacity;    

public:
  
    // Constructor to initialize the queue
    Queue(int c) {
        arr = new int[c];
        capacity = c;
        size = 0;
        front = 0;
    }

    // Get the front element
    int getFront() {
      
        // Queue is empty
        if (size == 0) {
            return -1;
        }
        else {
            return arr[front];
        } 
    }

    // Get the rear element
    int getRear() {
      
        // Queue is empty
        if (size == 0) {
            return -1; 
        }
        else {
            int rear = (front + size - 1) % capacity;
            return arr[rear];
        }
    }

    // Insert an element at the rear
    void enqueue(int x) {
      
        // Queue is full
        if (size == capacity) {
            return; 
        }
        else {
            int rear = (front + size) % capacity;
            arr[rear] = x;
            size++;
        }
    }

    // Remove an element from the front
    int dequeue() {
      
        // Queue is empty
        if (size == 0) {
            return -1;
        }
        else {
            int res = arr[front];
            front = (front + 1) % capacity;
            size--;
            return res;
        }
    }
};

int main() {
    Queue q(4);
    q.enqueue(10);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(20);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(30);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(40);
    cout << q.getFront() << " " << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << endl;
    q.dequeue();
    cout << q.getFront() << " " << q.getRear() << endl;
    q.enqueue(50);
    cout << q.getFront() << " " << q.getRear() << endl;
    return 0;
}