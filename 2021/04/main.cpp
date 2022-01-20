#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

using namespace std;
struct boards {
  vector<vector<int>> vBoardVal;
  vector<vector<bool>> vBoardMarked;
};

int main(int argc, char *argv[]) {
  boards *bingoBoards = new boards();

  auto seq = []() {
    string sLine;

    vector<int> seq;

    getline(cin, sLine);

    stringstream ss(sLine);
    string s;
    while (getline(ss, s, ',')) {
      seq.push_back(stoi(s));
    }

    return seq;
  }();

  vector<stringstream> vSplit;

  string sLine;
  stringstream nToken;
  int nPos = 0;
  while (getline(cin, sLine)) {
    while ((nPos = sLine.find(" ")) != static_cast<int>(string::npos)) {
      nToken = (sLine.substr(0, nPos));
      vSplit.push_back(nToken);
      sLine.erase(0, nPos + 1);
    }
    vSplit.push_back(sLine);

    vector<int> row;
    for (int i = 0; i < static_cast<int>(vSplit.size()); i++) {
      auto str = stoi(vSplit[i]);
      row.push_back(str);

      if (i % 5)
        bingoBoards->vBoardVal.push_back(move(row));
    }

    for (int i : seq) {
      cout << i << endl;
    }

    for (vector<int> i : bingoBoards->vBoardVal) {
      for (int x : i) {
        cout << x << " ";
      }
      cout << endl;
    }

    return 0;
  }
}
