#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

enum states : std::int16_t {
  truly_false,
  truly_approved,
  not_defined
};

int main() {
  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  string maximum_number;
  string answer;
  string nums;
  map<unsigned long long, states> numbers;

  if (input_file.is_open()) {
    getline(input_file, maximum_number);
    for (auto i = 1; i <= stoi(maximum_number); ++i) numbers[i] = states::not_defined;
    vector<unsigned long long> current_vector;

    while (nums != "HELP") {
      getline(input_file, nums);
      getline(input_file, answer);

      if (nums == "HELP") break;
      else {
        int i = 0, j = -1;
        while (i != nums.length()) {
          if (nums[i] == ' ' or i == nums.length() - 1) {
            current_vector.emplace_back(stoi(nums.substr(j + 1, i - j)));
            j = i;
          }
          ++i;
        }

        if (answer == "YES") {
          for (auto &cur_num: current_vector) {
            if (numbers[cur_num] != states::truly_false) numbers[cur_num] = states::truly_approved;
          }
        } else if (answer == "NO") {
          for (auto &cur_num: current_vector) {
            numbers[cur_num] = states::truly_false;
          }
        }
        current_vector.clear();
      }
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  if (output_file.is_open()) {
    for (auto &num: numbers) if (num.second == states::truly_approved) output_file << num.first << ' ';
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}