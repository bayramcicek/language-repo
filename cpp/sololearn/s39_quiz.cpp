// C11 standard
// created by cicek on Feb 07, 2021 2:14 PM

#include <iostream>
#include <string>

using namespace std;

class Queue1 {

protected:
    int *queue;
    int size;

public:
    Queue1() {
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

    virtual void print() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[i] << " <- ";
        }
        cout << endl;
    }

    Queue1 operator+(Queue &obj) {
        Queue1 res;
        for (int i = 0; i < this->size; i++) {
            res.add(this->queue[i]);
        }
        for (int i = 0; i < obj.size; i++) {
            res.add(obj.queue[i]);
        }
        return res;
    }
};
/*
 * You decide to create a new class called Queue2, which is derived from the Queue class and overrides
 * the print() method, outputting each element of the queue on a new line.
 *
 * Do not forget to change the access specifier of the Queue members, as they won't be inherited if private.
 */

//your code goes here

class Queue2 : public Queue1 {
public:
    void print() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << queue[i] << endl;
        }
        cout << endl;
    }

};


int main(int argc, char **argv) {

    Queue1 q1;
    q1.add(42);
    q1.add(2);
    q1.add(8);
    q1.add(1);
    q1.print();

    Queue2 q2;
    q2.add(3);
    q2.add(66);
    q2.add(128);
    q2.add(5);
    q2.add(111);
    q2.add(77890);
    q2.print();

    return 0;
}
