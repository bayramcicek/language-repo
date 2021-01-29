// C11 standard
// created by cicek on Jan 29, 2021 7:57 PM

#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    //complete the function
    int number = x;
    int reversedNum = 0;
    int remainder = 0;

    while (x != 0) {
        remainder = x % 10;
        reversedNum = reversedNum * 10 + remainder;
        x /= 10;
    }

    if (number == reversedNum) { return true; }
    else { return false; }
}

int main() {
    int n;
    cin >> n;

    if (isPalindrome(n)) {
        cout << n << " is a palindrome";
    } else {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}
