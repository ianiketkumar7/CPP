// Javascript Program for Forward Traversal (Iterative) of
// Doubly Linked List

class Node {
    constructor(data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }
}

// Function to traverse the doubly linked list in forward direction
function forwardTraversal(head) {
    let curr = head;

    while (curr !== null) {
    	
        // Output data of the current node
        console.log(curr.data + " ");

        // Move to the next node
        curr = curr.next;
    }

    console.log();
}

// Create a hardcoded doubly linked list:
// 1 <-> 2 <-> 3
let head = new Node(1);
let second = new Node(2);
let third = new Node(3);

head.next = second;
second.prev = head;
second.next = third;
third.prev = second;

console.log("Forward Traversal: ");
forwardTraversal(head);