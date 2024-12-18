#include <iostream>
#include <stack>

using namespace std;

class QueueWhithUsing2Stacks {
private:
    stack<int> input;
    stack<int> output;

public:
    void enqueue(int value) {
        input.push(value);
    }
    int dequeue() {
        if (output.empty()) {
            while (!input.empty()) {
              output.push(input.top());
                input.pop();
            }
        }
        if (output.empty()) {
            cout << "its empty" << endl;
            return -1;
        }
        int front = output.top();
        output.pop();
        return front;
    }
    bool isEmpty() {
        return input.empty() && output.empty();
    }
    int size() {
        return input.size() + output.size();
    }
};

int main() {
    QueueWhithUsing2Stacks queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "delet item: " << queue.dequeue() << endl;
    cout << "delet item: " << queue.dequeue() << endl;

    queue.enqueue(40);

    cout << "delet item: " << queue.dequeue() << endl;
    cout << "delet item: " << queue.dequeue() << endl;

    if (queue.isEmpty()) {
        cout << "its empty" << endl;
    }
    else {
        cout << "its not empty" << endl;
    }
    return 0;
}
