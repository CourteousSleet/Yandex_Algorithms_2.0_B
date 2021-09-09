#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
  auto cathetus_length = 0, X_x = 0, X_y = 0;
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    input_file >> cathetus_length >> X_x >> X_y;
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  auto result = 0;

  auto d_Cat_Cat = static_cast<double>(sqrt(pow(X_x - cathetus_length, 2) + pow(X_y - cathetus_length, 2))),
      d_A = static_cast<double>(sqrt(pow(X_x, 2) + pow(X_y, 2))),
      d_B = static_cast<double>(sqrt(pow(X_x - cathetus_length, 2) + pow(X_y, 2))),
      d_C = static_cast<double>(sqrt(pow(X_x, 2) + pow(X_y - cathetus_length, 2)));

  if (X_x <= cathetus_length and X_x >= 0 and X_y <= cathetus_length and X_y >= 0 and d_A <= d_Cat_Cat) result = 0;
  else if (min(d_A, min(d_B, d_C)) == d_A and d_A != d_B and d_A != d_C) result = 1;
  else if (min(d_A, min(d_B, d_C)) == d_B and d_B != d_A and d_B != d_C) result = 2;
  else if (min(d_A, min(d_B, d_C)) == d_C and d_C != d_A and d_C != d_B) result = 3;
  else if (min(d_A, min(d_B, d_C)) == d_A and d_A == d_B) result = 1;
  else if (min(d_A, min(d_B, d_C)) == d_A and d_A == d_C) result = 1;
  else if (min(d_A, min(d_B, d_C)) == d_B and d_B == d_A) result = 1;
  else if (min(d_A, min(d_B, d_C)) == d_B and d_B == d_C) result = 2;
  else if (min(d_A, min(d_B, d_C)) == d_C and d_C == d_A) result = 1;
  else if (min(d_A, min(d_B, d_C)) == d_C and d_C == d_B) result = 2;

  if (output_file.is_open()) {
    output_file << result;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}

