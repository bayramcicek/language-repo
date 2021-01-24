// C11 standard
// created by cicek on Jan 24, 2021 7:41 PM

#include <iostream>
#include <string>

using namespace std;


int main(int argc, char **argv) {

    int a, b;
/*To enable the user to input a value, use cin in combination with the extraction operator (>>).
 * The variable containing the extracted data follows the operator.*/

// As with cout, extractions on cin can be chained to request more than one input in a single statement: cin >> a >> b;
    cin >> a >> b;
    cout << a << "\n" << b;

    return 0;
}
