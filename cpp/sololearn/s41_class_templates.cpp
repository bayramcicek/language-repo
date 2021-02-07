// C11 standard
// created by cicek on Feb 07, 2021 2:43 PM

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Pair {
private:
    T first, second;
public:
    Pair(T a, T b) :
            first(a), second(b) {}

    T bigger();
};

template<class T>
T Pair<T>::bigger() {
    return (first > second ? first : second);
}

int main() {

//    Pair<double> obj(23.43, 5.68); // 23.43
    Pair<int> obj(23, 5); // 23
    cout << obj.bigger();

    return 0;
}
