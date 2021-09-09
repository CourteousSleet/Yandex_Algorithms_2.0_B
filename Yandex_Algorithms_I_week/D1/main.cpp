#include <iostream>
#include <fstream>

using namespace std;

int main() {
  long long number_of_students = 0;
  long long *students = nullptr;
  long long result = 0;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> number_of_students;
    students = new long long[number_of_students];
    for (auto i = 0; i < number_of_students; ++i) input_file >> students[i];
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (students == nullptr) {
    cerr << "Wrong input file values" << endl;
    return -1;
  }

  if (number_of_students % 2 == 0) result = students[(number_of_students / 2 + number_of_students / 2 + 1) / 2];
  else result = students[number_of_students / 2];

  if (output_file.is_open()) {
    output_file << result;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  delete[] students;
  return 0;
}