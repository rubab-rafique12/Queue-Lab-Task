#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;

    if (front == NULL) {  // If the list is empty
        front = newNode;
        rear = newNode;
        rear->next = front;  // Point to front, making it circular
    } else {
        rear->next = newNode;  // Link the new node after rear
        rear = newNode;        // Move rear to the new node
        rear->next = front;    // Complete the circular link
    }
    cout << "Enqueued: " << data << endl;
}

void dequeue() {
    if (front == NULL) {  // If the list is empty
        cout << "Queue is empty!" << endl;
        return;
    }

    if (front == rear) {  // If there's only one element
        cout << "Dequeued: " << front->data << endl;
        delete front;
        front = rear = NULL;  // Queue becomes empty
    } else {
        Node* temp = front;
        cout << "Dequeued: " << front->data << endl;
        front = front->next;      // Move front to the next node
        rear->next = front;       // Maintain circular link
        delete temp;
    }
}

void empty() {
    if (front == NULL) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty!" << endl;
    }
}

void display() {
    if (front == NULL) {
        cout << "Queue is empty!" << endl;
        return;
    }

    Node* curr = front;
    cout << "Queue elements: ";
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != front);  // Loop until we return to the starting node
    cout << endl;
}

int main() {
    enqueue(10);
    display();

    enqueue(20);
    display();

    enqueue(30);
    display();

    dequeue();
    display();

    empty();

    cout << "End of queue display." << endl;
    return 0;
}
