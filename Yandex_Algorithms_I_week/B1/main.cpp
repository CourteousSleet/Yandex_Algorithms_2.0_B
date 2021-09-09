#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  auto number_of_stations = -1, entry_station = -1, exit_station = -1;
  auto result = -1;
  ifstream input_file("../input.txt");
  ofstream output_file("../output.txt");

  if (input_file.is_open()) {
    input_file >> number_of_stations >> entry_station >> exit_station;
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  auto kek = abs(entry_station - exit_station) - 1;
  auto kek_2 = abs (number_of_stations - exit_station) + entry_station - 1;
  auto kek_3 = abs(number_of_stations - entry_station) + exit_station - 1;

  result = min(kek, min(kek_2, kek_3));

  if (output_file.is_open()) {
    output_file << result;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}