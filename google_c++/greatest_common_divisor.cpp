#include <iostream>

// using value
const int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// using pointer
const int gcd2(int *a, int *b) {
    while (*b != 0) {
        int t = *b;
        *b = *a % *b;
        *a = t;
    }
    return *a;
}

// only in c++
// using reference
const int gcd3(int &a, int &b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
   int a = 4;
   int b = 14;
   std::cout << gcd(a, b) << '\n';
   std::cout << gcd2(&a, &b) << '\n';
   std::cout << gcd3(a, b) << '\n';
}
