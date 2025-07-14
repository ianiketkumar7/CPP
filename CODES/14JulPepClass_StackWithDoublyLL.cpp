#include<iostream>
using namespace std;

// DLL Node structure
class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};

// Doubly Linked List structure
class DLL {
    Node* start;
    Node* top;
public:
    DLL() {
        start = nullptr;
        top = nullptr;
    }

    // Check if stack is empty
    bool isEmpty() {
        return start == nullptr;
    }

    // add element to stack
    void push(int val) {
        Node* cur = new Node(val);

        // if stack is empty, 
        // set start and top to cur
        if (isEmpty()) {
            start = cur;
            top = cur;
        }

        // else add cur to the top of stack
        else {
            top->next = cur;
            cur->prev = top;
            top = cur;
        }
    }

    // remove top element from stack
    void pop() {
        Node* cur = top;

        // if stack is empty, return
        if (isEmpty()) {
            cout << "Stack is Empty";
            return;
        }

        // else if there is only one element
        else if (top == start) {
            top = nullptr;
            start = nullptr;
            delete cur;
        }

        // else remove the top element
        else {
            top->prev->next = nullptr;
            top = cur->prev;
            delete cur;
        }
    }

    // print the top element
    void topElement() {
        if (isEmpty())
            cout << "Stack is empty";
        else
            cout << top->data << endl;
    }

    // find the stack size
    void stackSize() {
        int cnt = 0;
        Node* ptr = start;
        while (ptr != nullptr) {
            cnt++;
            ptr = ptr->next;
        }
        cout << cnt << endl;
    }

    // print the stack
    void printStack() {
        Node* ptr = start;
        while (ptr != nullptr) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    DLL stack;
    stack.push(2);
    stack.push(5);
    stack.push(10);
    stack.printStack();
    stack.topElement();
    stack.stackSize();
    stack.pop();
    stack.printStack();
    stack.topElement();
    stack.stackSize();
    return 0;
}