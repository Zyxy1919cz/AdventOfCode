#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Coord {
  int nX0, nY0;
  int nX1, nY1;

  Coord(int nX0, int nY0, int nX1, int nY1)
      : nX0(nX0), nY0(nY0), nX1(nX1), nY1(nY1){};
};

int main(int argc, char *argv[]) {
  string sIn;
  vector<Coord> vInput;

  while (getline(cin, sIn)) {
    auto sep_pos = sIn.find(',');
    auto sep_pos2 = sIn.find('>');

    auto nX0 = sIn.substr(0, sep_pos);
    auto nY0 = sIn.substr(sep_pos, (sep_pos2 - 2));

    sep_pos = sIn.find_last_not_of(',');
    auto nX1 = sIn.substr((sep_pos2 + 1), sep_pos);
    auto nY1 = sIn.substr(sep_pos);

    vInput.emplace_back(Coord(nX0, nY0, nX1, nY1));
  }

  return 0;
}
