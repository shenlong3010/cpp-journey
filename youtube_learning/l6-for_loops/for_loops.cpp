#include <array>
#include <iostream>


int main() {
    std::array<int, 5> a1{0, 1, 2, 3, 4};
    std::cout << "Range-Based\n";
    for (auto i : a1) std::cout << i << " ";
    std::cout << '\n';
    for (auto it = begin(a1); it != end(a1); ++it)
        std::cout << *it << " ";
    std::cout << '\n';

    std::cout << "Reverse-Iterators\n";
    for (auto it = rbegin(a1); it != rend(a1); ++it)
        std::cout << *it << " ";
    std::cout << '\n';

    std::cout << "Explicit size comparison\n";
    for (auto i = 0u; i != a1.size(); ++i)
        std::cout << a1[i] << " ";
    std::cout << '\n';

    std::cout << "C-style for loop\n";
    int c_a[] = {0, 1, 2, 3, 4};
    for (auto i : c_a)
        std::cout << i << '\n';
    std::cout << '\n';
    return 0;
}
