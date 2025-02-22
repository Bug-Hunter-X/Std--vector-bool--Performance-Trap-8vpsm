#include <iostream>
#include <vector>
#include <bitset>
#include <chrono>

using namespace std;
using namespace chrono;

int main() {
  // Using std::vector<bool>
  auto start = high_resolution_clock::now();
  std::vector<bool> boolVector(1000000);
  for (size_t i = 0; i < boolVector.size(); ++i) {
    boolVector[i] = (i % 2 == 0);
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  cout << "std::vector<bool> execution time: " << duration.count() << " microseconds" << endl;

  // Using std::bitset
  start = high_resolution_clock::now();
  std::bitset<1000000> bitsetVector;
  for (size_t i = 0; i < 1000000; ++i) {
    bitsetVector[i] = (i % 2 == 0);
  }
  stop = high_resolution_clock::now();
  duration = duration_cast<microseconds>(stop - start);
  cout << "std::bitset execution time: " << duration.count() << " microseconds" << endl;

  return 0;
}
