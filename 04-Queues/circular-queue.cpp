// Circular queue using an array
#include <iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int front, rear, capacity;

public:
    CircularQueue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full\\n";
            return;
        }
        if (isEmpty()) front = 0;
        rear = (rear + 1) % capacity;
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\\n";
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\\n";
            return;
        }
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % capacity;
        }
        cout << endl;
    }

    ~CircularQueue() { delete[] arr; }
};

int main() {
    CircularQueue q(4);
    q.enqueue(21);
    q.enqueue(22);
    q.enqueue(31);
    q.enqueue(111);
    q.display();
    q.dequeue();
    q.enqueue(55);
    q.display();
    return 0;
}
