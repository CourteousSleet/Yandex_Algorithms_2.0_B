#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define MAX 10000

int main() {
  auto slab_length = 0u, number_of_blocks = 0u, block = 0u;
  bool blocks[MAX] = {false};
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> slab_length >> number_of_blocks;
    for (auto j = 0; j < number_of_blocks; ++j) {
      input_file >> block;
      blocks[block] = true;
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    if (slab_length % 2 != 0 and blocks[slab_length / 2]) {
      output_file << slab_length / 2;
      output_file.close();
      return 0;
    }

    for (auto i = slab_length / 2 - 1; i >= 0; --i)
      if (blocks[i]) {
        output_file << i << ' ';
        break;
      }

    for (auto i = slab_length / 2; i < slab_length; ++i)
      if (blocks[i]) {
        output_file << i << ' ';
        break;
      }

    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}