#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int data)
        : data(data)
        , next(nullptr)
    {
    }
};

// Function to delete a node at a given position
Node* deleteNode(Node* head, int position)
{
    // previous of node to be deleted
    Node* prev;
    Node* temp = head;

    // Base case if linked list is empty
    if (temp == NULL)
        return head;

    // Case 1: Head is to be deleted
    if (position == 1) {
        // make next node as head and free old head
        head = temp->next;
        free(temp);
        return head;
    }

    // Case 2: Node to be deleted is in middle
    // Traverse till given position
    for (int i = 1; i != position; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If given position is found, delete node
    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
    else {
        cout << "Data not present\n";
    }

    return head;
}

void printList(Node* head)
{
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr" << endl;
}

// {Main == Driver} code
int main()
{
    // Creating a static linked list
    Node* head = new Node(100);
    head->next = new Node(200);
    head->next->next = new Node(300);
    head->next->next->next = new Node(400);
    head->next->next->next->next = new Node(500);

    cout << endl;
    cout << "Original list: ";
    printList(head);

    // Deleting node at position 2
    int position = 2;
    head = deleteNode(head, position);

    cout << "List after deletion : ";
    printList(head);
    cout << endl;

    // Cleanup remaining nodes
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}