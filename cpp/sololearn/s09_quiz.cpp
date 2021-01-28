// C11 standard
// created by cicek on Jan 28, 2021 8:43 PM

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

    /*
     * You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each group of 5 people is getting a discount,
     which is determined by the age of the youngest person in the group.
You need to create a program that takes the ages of all 5 people as input and outputs the total price of the tickets.*/

    int ages[5];
    double youngest = 0;
    double total;

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    //your code goes here
    youngest = ages[0];
    for (int j = 1; j < 5; ++j) {
        if (ages[j] < youngest) { youngest = ages[j]; }
    }

    total = 50 - (50 * (youngest/100));
    cout << total;
    return 0;
}
