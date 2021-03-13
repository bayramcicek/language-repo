// C++17 standard
// created by cicek on Mar 02, 2021 4:08 PM

#include <iostream>
#include <string>
#include <map>


using namespace std;

int main(int argc, char **argv) {

    map<char, int> mp;

    map<char, int>::const_iterator it;
    map<char, int>::const_iterator it1;

    mp['a'] = 5;
    mp['b'] = 10;
    mp['c'] = 15;
    mp['d'] = 20;
    mp['e'] = 30;

    it = mp.find('b');
    auto it_sec = mp.begin();

    cout << it_sec->second;
    cout << (++it_sec)->second;

//    if (it == mp.end())
//        cout << "Key-value pair not present in map";
//    else
//        cout << "Key-value pair present : "
//        << it->first << " -> " << it->second;

    for (auto& it3 : mp) {
        cout << endl <<it3.second;
    }


    return 0;
}
