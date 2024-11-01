#include <iostream>
using namespace std;

const int SIZE = 10;  // Define the size of the queue
int queue[SIZE];
int front = -1;
int rear = -1;
int count = 0;

void enqueue(int value) {
    if (count == SIZE) {  
        cout << "Queue is Full!" << endl;
        return;
    }
    if (count == 0) {
        front = 0;  // Initialize front on the first enqueue
    }
    rear = (rear + 1) % SIZE;  // Move rear forward in circular manner
    queue[rear] = value;
    count++;
    cout << "Enqueued in the queue: " << value << endl;
}

void dequeue() {
    if (count == 0) {  // Check if the queue is empty
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Dequeued " << queue[front] << " from the queue" << endl;
    front = (front + 1) % SIZE;  // Move front forward in circular manner
    count--;

    if (count == 0) {  // Reset front and rear when the queue becomes empty
        front = rear = -1;
    }
}

void display() {
    if (count == 0) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue elements are: ";
    
    for (int i = 0; i < count; i++) {  // Loop exactly 'count' times
        int index = (front + i) % SIZE;  // Calculate index in circular manner
        cout << queue[index] << " ";
    }
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

    enqueue(40);
    display();

    enqueue(50);
    display();

    dequeue();
    display();

    enqueue(60);  // Enqueue 60 at the end
    display();

    return 0;
}
