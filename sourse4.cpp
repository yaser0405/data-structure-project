// sourse4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class Stack {
private:
    int top;
    int arr[1000];

public:
    Stack() {
        top = -1;
    }

    bool IsEmpty() {
        return top == -1;
    }

    bool IsFull() {
        return top == 1000 - 1;
    }

    void push(int item) {
        if (IsFull()) {
            cout << "Stack is full" << endl;
            return;
        }
        arr[++top] = item;
    }

    void pop() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    int peek() {
        if (IsEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack f;
    f.push(115);
    f.push(2);
    f.push(66);
    cout <<"Top Element:"<<f.peek() << endl;
    f.pop();
    cout <<"Top element after pop:"<<f.peek()<< endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
