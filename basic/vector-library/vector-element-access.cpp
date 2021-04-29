#include <iostream>
#include <vector>

int main() {
  std::vector<int> g1;
  for (int i = 1; i <= 10; i++)
    g1.push_back(i * 10);
  std::cout << "\nreference operator [g]: g1[2] = " << g1[5];
  return 0;
}
