#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, long long int> elections;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    string name;
    long long int number_of_voters;
    while (input_file >> name >> number_of_voters) {
      elections[name] += number_of_voters;
    }

    for (auto &elected: elections) {
      output_file << elected.first << ' ' << elected.second << endl;
    }

    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}