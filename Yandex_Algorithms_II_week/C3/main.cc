#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
  vector<int> numbers;
  unordered_map<int, int> numbers_appearances;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    auto num = 0;
    while (input_file >> num) {
      numbers.push_back(num);
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  for (auto &num_v: numbers) {
    ++numbers_appearances[num_v];
  }

  if (output_file.is_open()) {
    for (auto &number: numbers) if (numbers_appearances[number] == 1) output_file << number << ' ';
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}