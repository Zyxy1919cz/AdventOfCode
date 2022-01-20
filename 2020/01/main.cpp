#include <iostream>
#include <streambuf>
#include <string>
#include <vector>

using namespace std;

auto partOne(const vector<string> &vInput) {
  for (string sOne : vInput) {
    for (string sTwo : vInput) {

      if ((stoi(sOne) + stoi(sTwo)) == 2020) {
        return (stoi(sOne) * stoi(sTwo));
      }
    }
  }
  return 0;
}

auto partTwo(const vector<string> &vInput) {

  for (string sOne : vInput) {
    for (string sTwo : vInput) {
      for (string sThree : vInput) {

        if ((stoi(sOne) + stoi(sTwo) + stoi(sThree)) == 2020) {
          return (stoi(sOne) * stoi(sTwo) * stoi(sThree));
        }
      }
    }
  }
  return 0;
}

int main(int argc, char *argv[]) {

  vector<string> vInput;
  string sIn;

  while (getline(cin, sIn))
    vInput.push_back(sIn);

  cout << partOne(vInput) << endl;
  cout << partTwo(vInput) << endl;

  return 0;
}
