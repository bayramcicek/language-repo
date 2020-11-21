// C11 standard
// created by cicek on Nov 13, 2020 7:48 PM

#include <iostream>
#include <cmath>
#include "string"

using namespace std;

int main(int argc, char **argv)
{
    cout << min(3, 4) << endl;
    cout << sqrt(64) << endl;
    cout << round(1000.51) << endl;
    cout << log(2.78) << endl;

    int day = 3;
    switch (day)
    {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        default:
            cout << "default" << endl;
    }

    string food = "elma";
    string *ptr = &food;

    cout << food << endl;
    cout << &food << "\n"; // 0x7ffc81619890
    cout << ptr << "\n"; // 0x7ffc81619890

    cout << ((45 < 5) ? "selam" : "değil") << "\n";

    int ogrenci[50];

    return 0;
}
