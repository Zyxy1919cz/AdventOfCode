#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct polymerChain {
  char cPolymerName;
  unsigned int nOccurance;
  vector<int> vPostition;
};

struct polymerTemplate {
  char cFirst, cSecond, cInplace;

  polymerTemplate(char cFirst, char cSecond, char cInplace)
      : cFirst(cFirst), cSecond(cSecond), cInplace(cInplace){};
};

auto solveOne(const vector<polymerChain> &vPolymer,
              const vector<polymerTemplate> &vInput, int nSteps) {

  for (int i = 0; i < nSteps; i++) {
    for (const auto &[cFirst, cSecond, cInplace] : vInput) {
      vector<int> vPosFirst;

      for (const auto &[cPolymerName, mOccurance, vPosition] : vPolymer) {
        if (cFirst == cPolymerName) {
          vPosFirst.emplace_back(vPosition);
          break;
        }
      }

      for (const auto &[cPolymerName, mOccurance, vPosition] : vPolymer) {
        if (cSecond == cPolymerName) {

          break;
        }
      }
    }
  }

  int main(int argc, char *argv[]) { return 0; }
