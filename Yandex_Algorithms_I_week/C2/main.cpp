#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string input_string;
  auto number_of_differs = 0u, i = 0u, j = 0u;
  ifstream input_file("../input.txt");
  ofstream output_file("../output.txt");

  if (input_file.is_open()) {
    input_file >> input_string;
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  j = input_string.length() - 1;

  if (input_string.length() % 2 == 0) {
    while (j > i) if (input_string.at(i++) != input_string.at(j--)) ++number_of_differs;
  } else {
    while (j != i) if (input_string.at(i++) != input_string.at(j--)) ++number_of_differs;
  }

  if (output_file.is_open()) {
    output_file << number_of_differs;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}