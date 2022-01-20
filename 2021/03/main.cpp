#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

static const int nSize = 12;

auto partOne(const vector<string> &vInput) {

  int nCount = 0;
  int nBits[nSize] = {0, 0, 0, 0, 0};

  for (string sIn : vInput) {
    for (int i = 0; i < static_cast<int>(sIn.size()); i++) {
      if (sIn.at(i) == '1') {
        nBits[i]++;
      }
    }
    nCount++;
  }

  bitset<nSize> bits;

  for (int i = 0; i < nSize; i++) {
    if (nBits[i] > (nCount / 2)) {
      bits.set((nSize - 1) - i, true);
    }
  }

  int nGamma = bits.to_ulong();
  int nEpsilon = bits.flip().to_ulong();

  return nGamma * nEpsilon;
}

auto partTwo(const vector<string> &vInput) {

  for (int i = 0; i < 5; i++) {

    int nCount = 0;
    int nBits = 0;

    for (string sIn : vInput) {
      if (sIn.at(i) == '1')
        nBits++;
      nCount++;
    }

    for (string sIn : vInput) {
      if (sIn.at(i) != (nBits > (nCount / 2)))
        vInput.erase(remove_if(_FIter, _FIter, _Predicate))
    }
  }
}

int main(int argc, char *argv[]) {

  vector<string> vInput;
  string sIn;

  // KISS for fuck's sake
  while (cin >> sIn) {
    vInput.push_back(sIn);
  }
  cout << partOne(vInput) << endl;
  cout << partTwo(vInput) << endl;

  return 0;
}
