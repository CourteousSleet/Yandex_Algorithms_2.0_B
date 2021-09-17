#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<long long int, long long int> kek;
  long long int count = 0;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> count;
    for (auto i = 0; i < count; ++i) {
      long long int a, b;
      input_file >> a >> b;
      kek[a] += b;
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    for (auto &keksik: kek) {
      output_file << keksik.first << ' ' << keksik.second << endl;
    }
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}