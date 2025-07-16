#include <iostream>
#include <queue>
using namespace std;

queue<int> q;

bool isEmpty()
{
    return q.empty();
}

void qEnqueue(int data)
{
    q.push(data);
}

void qDequeue()
{
    if (isEmpty()) {
        return;
    }
    q.pop();
}

int getFront()
{
    if (isEmpty()) return -1;
    return q.front();
}

int getRear()
{
    if (isEmpty()) return -1;
    return q.back();
}

int main()
{
    qEnqueue(1);
    qEnqueue(8);
    qEnqueue(3);
    qEnqueue(6);
    qEnqueue(2);

    if (!isEmpty()) {
        cout << "Queue after enqueue operation: ";
        queue<int> tempQueue = q; 
        while (!tempQueue.empty()) {
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }

    cout << "Front: " << getFront() << endl;
    cout << "Rear: " << getRear() << endl;

    cout << "Queue size: " << q.size() << endl;

    qDequeue();

    cout << "Is queue empty? " << (isEmpty() ? "Yes" : "No") << endl;

    return 0;
}