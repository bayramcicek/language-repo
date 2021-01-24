// C11 standard
// created by cicek on Nov 21, 2020 12:34 PM

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int salary;

public:
    // setter
    void setSalary(int s) {
        salary = s;
    }

    // getter
    int getSalary() {
        return salary;
    }
};

int main(int argc, char **argv) {
    Employee emp{};
    emp.setSalary(4000);
    cout << emp.getSalary() << "\n";

    return 0;
}
