// Stack implementation where arr[0] stores the current top index.
#include <iostream>
using namespace std;

class StackWithoutTop {
    int *arr;
    int capacity;

public:
    StackWithoutTop(int size) {
        capacity = size;
        arr = new int[capacity + 1];
        arr[0] = 0; // number of elements in the stack
    }

    bool isEmpty() { return arr[0] == 0; }
    bool isFull() { return arr[0] == capacity; }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow\\n";
            return;
        }
        arr[++arr[0]] = value;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\\n";
            return -1;
        }
        return arr[arr[0]--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\\n";
            return -1;
        }
        return arr[arr[0]];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\\n";
            return;
        }
        for (int i = arr[0]; i >= 1; i--) cout << arr[i] << " ";
        cout << endl;
    }

    ~StackWithoutTop() { delete[] arr; }
};

int main() {
    StackWithoutTop s(4);
    s.push(23);
    s.push(25);
    s.push(24);
    cout << "Popped: " << s.pop() << endl;
    s.push(26);
    cout << "Top: " << s.peek() << endl;
    s.display();
    return 0;
}
