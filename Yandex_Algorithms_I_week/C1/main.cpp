#include <iostream>
#include <fstream>

using namespace std;

int main() {
  auto x = -1, y = -1, z = -1;
  auto result = 0;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> x >> y >> z;
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (x > 12 or y > 12 or x == y) result = 1;
  else result = 0;

  if (output_file.is_open()) {
    output_file << result;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}
