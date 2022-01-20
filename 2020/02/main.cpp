#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct passCode {
  int nMin, nMax;
  string sPass;
  char cContain;

  passCode(int nMin, int nMax, string sPass, char cContain)
      : nMin(nMin), nMax(nMax), sPass(sPass), cContain(cContain){};
};

auto partOne(const vector<passCode> &passCode) {
  auto nValid = 0;

  for (const auto &[nMin, nMax, sPass, cContain] : passCode) {

    auto nCount = 0;
    for (const char &cChar : sPass) {
      if (cChar == cContain)
        nCount++;
    }

    if ((nCount >= nMin) && (nCount <= nMax))
      nValid++;
  }

  return nValid;
}

auto partTwo(const vector<passCode> &passCode) {
  auto nValid = 0;

  for (const auto &[nMin, nMax, sPass, cContain] : passCode) {

    if ((sPass.at(nMin - 1) == cContain) ^ (sPass.at(nMax - 1) == cContain)) {
      nValid++;
    }
  }

  return nValid;
}

int main(int argc, char *argv[]) {

  vector<passCode> passCode;
  string sIn;

  while (getline(cin, sIn)) {
    auto sep_pos1 = sIn.find('-');

    auto nMin = sIn.substr(0, sep_pos1);
    auto sep_pos2 = sIn.find(' ');
    auto nMax = (sIn.substr(sep_pos1 + 1, sep_pos2 - 1));

    sep_pos1 = sIn.find(':');
    char cContain = sIn.at(sep_pos1 - 1);
    auto sPass = sIn.substr(sep_pos1 + 2);

    passCode.emplace_back(stoi(nMin), stoi(nMax), sPass, cContain);
  }

  cout << partOne(passCode) << endl;
  cout << partTwo(passCode) << endl;

  return 0;
}
