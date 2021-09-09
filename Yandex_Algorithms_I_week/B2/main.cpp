#include <iostream>
#include <fstream>
#include <map>

using namespace std;

#define MAX 10

int main() {
  unsigned buildings[MAX];
  map<unsigned, unsigned> distances;
  auto maximum = 0u;
  ifstream input_file("../input.txt");
  ofstream output_file("../output.txt");

  if (input_file.is_open()) {
    for (auto & building : buildings) {
      input_file >> building;
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  for (auto i = 0; i < MAX; ++i) if (buildings[i] == 1) distances.insert(make_pair(i, MAX));

  for (auto i = 0; i < MAX; ++i) {
    if (buildings[i] == 1) {
      for (auto j = 0; j < MAX; ++j) {
        if (buildings[j] == 2) {
          if (abs(i - j) < distances.at(i)) distances.at(i) = abs(i - j);
        }
      }
    }
  }

  for (auto &distance : distances) {
    if (distance.second > maximum) maximum = distance.second;
  }

  if (output_file.is_open()) {
    output_file << maximum;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}