#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
  map<int, unsigned> numbers_appearances;
  vector<string> sequence_of_answers;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    auto number = 0;
    while (input_file >> number) {
      if (numbers_appearances[number]) sequence_of_answers.emplace_back("YES");
      else sequence_of_answers.emplace_back("NO");
      ++numbers_appearances[number];
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    for (auto &answer: sequence_of_answers) output_file << answer << endl;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}