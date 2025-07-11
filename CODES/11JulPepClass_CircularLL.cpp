#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

// Function to insert a node into an empty circular singly linked list
Node *insertInEmptyList(Node *last, int data){
    if (last != nullptr) return last;
    
    // Create a new node
    Node *newNode = new Node(data);
  
    // Point newNode to itself
    newNode->next = newNode;
  
    // Update last to point to the new node
    last = newNode;
    return last;
}

void printList(Node* last){
    if(last == NULL) return;
  
    // Start from the head node
    Node* head = last->next;
    while (true) {
        cout << head->data << " ";
        head = head->next;
        if (head == last->next) break;
    }
    cout << endl;
}

int main(){
    Node *last = nullptr;

    // Insert a node into the empty list
    last = insertInEmptyList(last, 1);

    // Print the list
    cout << "List after insertion: ";
    printList(last);

    return 0;
}