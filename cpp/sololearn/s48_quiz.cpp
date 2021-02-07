// C11 standard
// created by cicek on Feb 07, 2021 4:35 PM

#include <iostream>
#include <string>
#include <utility>

using namespace std;

/*
 * Transform the given Queue class to a class template, which can work with different data types.
The code in main declares two Queues, one for integers, and another one for strings.
 */

template<typename T>
class Queue {
protected:
    T size;
    int *queue;

public:
    Queue() {
        size = 0;
        queue = new int[100];
    }

    void add(int data) {
        queue[size] = data;
        size++;
    }

    void remove() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        } else {
            for (int i = 0; i < size - 1; i++) {
                queue[i] = queue[i + 1];
            }
            size--;
        }
    }

    void print() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }

    Queue operator+(Queue &obj) {
        Queue res;
        for (int i = 0; i < this->size; i++) {
            res.add(this->queue[i]);
        }
        for (int i = 0; i < obj.size; i++) {
            res.add(obj.queue[i]);
        }
        return res;
    }
};

template<>
class Queue<string> {
    int size;
    string *queue;

public:
    Queue() {
        size = 0;
        queue = new string[100];
    }

    void add(string data) {
        queue[size] = std::move(data);
        size++;
    }

    void print() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }

};

int main(int argc, char **argv) {

    Queue<int> q1;
    q1.add(42);
    q1.add(2);
    q1.add(8);
    q1.add(1);
    q1.print();

    Queue<string> q2;
    q2.add("Dave");
    q2.add("John");
    q2.add("Amy");
    q2.print();

    return 0;
}
