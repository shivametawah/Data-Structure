#include <iostream>
using namespace std;

class Stack {
    int top;
    int arr[100]; // max size

public:
    Stack() { top = -1; }

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == 99; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();           // 30 20 10
    cout << s.peek() << endl; // 30

    s.pop();
    s.display();           // 20 10

    return 0;
}
