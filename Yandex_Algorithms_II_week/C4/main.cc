#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  map<string, int> words;
  vector<pair<int, string>> sorted_words;

  ifstream input_file("input.txt");
  ofstream output_file("output.txt");

  if (input_file.is_open()) {
    string s;
    while (input_file >> s) {
      words[s] += 1;
    }
    input_file.close();
  } else cerr << "Unable to open input file" << endl;

  for (auto &word: words) {
    pair<int, string> kek = make_pair(word.second, word.first);
    sorted_words.emplace_back(kek);
  }

  sort(sorted_words.begin(), sorted_words.end(), [](const pair<int, string> &x,
                                                    const pair<int, string> &y) {
    if (x.first == y.first) return x.second < y.second;
    return x.first > y.first;
  });

  if (output_file.is_open()) {
    for (auto &s_word: sorted_words) output_file << s_word.second << endl;
    output_file.close();
  } else cerr << "Unable to open output file" << endl;

  return 0;
}