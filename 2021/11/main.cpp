#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

auto partOne(vector<vector<int>> &vInput) {

  for (int x = 0; x < 10; x++) {
    for (int c = 0; c < static_cast<int>(vInput.size()); c++) {
      for (int r = 0; r < static_cast<int>(vInput.size()); r++) {
        vInput[c][r]++;
      }
    }

    for (int c = 0; c < static_cast<int>(vInput.size()); c++) {
      for (int r = 0; r < static_cast<int>(vInput.size()); r++) {
        if (vInput[c][r] > 8) {
          cout << 'N';
        }
      }
    }
  }
  return 0;
}

auto partTwo(const vector<vector<int>> vInput) { return 0; }

int main(int argc, char *argv[]) {
  string sIn;
  vector<vector<int>> vInput;

  while (getline(cin, sIn)) {
    vector<int> row;

    for (const auto &cNum : sIn) {
      cout << cNum << ' ';

      row.push_back(cNum - '0');
    }
    vInput.push_back(move(row));
  }

  cout << partOne(vInput) << endl;
  cout << partTwo(vInput) << endl;

  return 0;
}
