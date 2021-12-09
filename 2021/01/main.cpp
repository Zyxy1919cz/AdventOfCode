#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

auto partOne(const vector<int> &vInput) {
  auto aOutput = 0;

  auto prev = vInput[0];

  for (auto num : vInput) {
    if (prev < num) {
      aOutput++;
    }
    prev = num;
  }

  return aOutput;
}

auto partTwo(const vector<int> &vInput) {
  auto aOutput = 0;

  for (int i = 0; i < static_cast<int>(vInput.size() - 3); i++) {
    int nFirst = vInput[i] + vInput[i + 1] + vInput[i + 2];
    int nSecond = vInput[i + 1] + vInput[i + 2] + vInput[i + 3];

    if (nFirst < nSecond) {
      aOutput++;
    }
  }

  return aOutput;
}

int main(int argc, char *argv[]) {
  vector<int> vInput;
  int x;
  while (std::cin >> x)
    vInput.push_back(x);

  cout << partOne(vInput) << endl;
  cout << partTwo(vInput) << endl;

  return 0;
}
