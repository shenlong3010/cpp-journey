#include <iostream>
#include <vector>

int main() {
  std::vector<int> g1;
  for (int i = 1; i <= 5; i++) 
    g1.push_back(i);
  std::cout << "size :" << g1.size();
  std::cout << "\ncapacity : " << g1.capacity();
  std::cout << "\nmax size : " << g1.max_size();

  // resizes the vector size to 4
  g1.resize(4);
  std::cout << "\nsize: " << g1.size();

  // checks if the vector is empty or not
  if (g1.empty() == false) std::cout << "\nvector is not empty";
  else std::cout << "\nvector is empty";

  // shrinks the vector
  g1.shrink_to_fit();
  std::cout << "\nvector elements are: ";
  for (auto i = g1.begin(); i != g1.end(); i++)
    std::cout << *i << " ";
  return 0;
}

