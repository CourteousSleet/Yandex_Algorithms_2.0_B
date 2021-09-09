#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >>
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    output_file << ;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}