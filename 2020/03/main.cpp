#include <iostream>
#include <string>
#include <vector>

using namespace std;

auto partOne(const vector<vector<int>> &toboggan) {
  int nX = 3, nY = 1;
  int nTreeCOunt = 0;

  cout << toboggan.size() << endl << toboggan[0].size();

  while (nY <= static_cast<int>(toboggan.size())) {
    if (nX <= static_cast<int>(toboggan[0].size())) {
      for (vector<int> nCopy : toboggan) {
        cout << "n";
      }
    }
  }
  return 0;
}

auto partTwo(const vector<vector<int>> &toboggan) { return 0; }

int main(int argc, char *argv[]) {
  string sIn;
  vector<vector<int>> toboggan;
  vector<int> row;

  while (getline(cin, sIn)) {

    for (const char cBoard : sIn) {
      row.push_back((cBoard == '.') ? 0 : 1);
    }
    toboggan.push_back(row);
  }

  cout << partOne(toboggan) << endl;
  cout << partTwo(toboggan) << endl;

  return 0;
}
