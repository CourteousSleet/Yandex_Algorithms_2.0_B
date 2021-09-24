#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
  map<int, unsigned> numbers_and_amount;
  auto result = 0u;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    auto a = 0, b = 0;
    while (input_file >> a >> b) {
      ++numbers_and_amount[a];
      ++numbers_and_amount[b];
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  for (auto &number: numbers_and_amount) if (number.second == 2) ++result;

  if (output_file.is_open()) {
    output_file << result;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}