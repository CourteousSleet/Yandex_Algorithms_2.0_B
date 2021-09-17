#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <forward_list>
#include <algorithm>

using namespace std;

int main() {
  map<string, int> words;
  forward_list<map<string, int>> sorted_words;

  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}