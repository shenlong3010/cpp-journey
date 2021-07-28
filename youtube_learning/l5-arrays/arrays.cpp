#include <iostream>
#include <array>


using std::array;
using std::cout;
using std::endl;


int main() {
    array<int, 3> a_0;
    a_0 = {10, 20, 30};
    for (auto i : a_0)
        cout << i << endl;
    array<int, 3> a_1 {10, 20, 30};
    array<int, 3> a_2 {10}; // a_2[1] and a_2[2] are 0
    cout << a_2.size() << endl;
    cout << a_2.front() << endl;
    cout << a_2.back() << endl;
    a_2.fill(10); // fill the empty slot with value of 10

    // C-style arrays
    int c_3[3] = {1, 2, 3};
    for (auto i = 0; i != sizeof(c_3)/sizeof(c_3[0]); ++i)
        cout << c_3[i] << endl;

}
