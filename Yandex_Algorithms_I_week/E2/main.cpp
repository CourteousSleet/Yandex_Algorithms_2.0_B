#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 100

int main() {
  auto number_of_folders = 0u, result = 0u;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> number_of_folders;
    vector<unsigned> diplomas(number_of_folders);
    for (auto i = 0; i < number_of_folders; ++i) {
      input_file >> diplomas[i];
    }
    sort(diplomas.begin(), diplomas.end());
    if (output_file.is_open()) {

      for (auto i = 0; i < number_of_folders - 1; ++i) result += diplomas[i];

      output_file << result;
      output_file.close();
    } else cerr << "Unable to open output file" << endl;

    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  return 0;
}