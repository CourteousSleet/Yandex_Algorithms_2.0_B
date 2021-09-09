#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  int finish_code = -1, interact_result = -1, checker_result = -1;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> finish_code >> interact_result >> checker_result;
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    switch (interact_result) {
      case 0:
        if (finish_code != 0) output_file << 3;
        else output_file << checker_result;
        break;

      case 1:
        output_file << checker_result;
        break;

      case 4:
        if (finish_code != 0) output_file << 3;
        else output_file << 4;
        break;

      case 6:
        output_file << 0;
        break;

      case 7:
        output_file << 1;
        break;

      default:
        output_file << interact_result;
        break;
    }
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}