#include <iostream>
#include <fstream>

using namespace std;

int main() {
  auto next_symbol = -1ll, maximum = 0ll, num_of_elem = 0ll;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    while (next_symbol != 0) {
      input_file >> next_symbol;
      if (next_symbol > maximum) {
        maximum = next_symbol;
        num_of_elem = 1;
      } else if (next_symbol == maximum) ++num_of_elem;
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    output_file << num_of_elem;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}