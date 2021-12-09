#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;

enum class Op { Forward, Down, Up };

struct OpCode {
  Op op;
  int nVal;

  OpCode(Op op, int nVal) : op(op), nVal(nVal){};
};

auto partOne(const vector<OpCode> &opCode) {
  auto nDepth = 0;
  auto nPos = 0;

  for (const auto &[op, val] : opCode) {
    switch (op) {
    case Op::Forward:
      nPos += val;
      break;
    case Op::Down:
      nDepth += val;
      break;
    case Op::Up:
      nDepth -= val;
      break;
    }
  }

  return nDepth * nPos;
}

auto partTwo(const vector<OpCode> &opCode) {
  auto nDepth = 0;
  auto nPos = 0;
  auto nAim = 0;

  for (const auto &[op, val] : opCode) {
    switch (op) {
    case Op::Forward:
      nPos += val;
      nDepth += nAim * val;
      break;
    case Op::Down:
      nAim += val;
      break;
    case Op::Up:
      nAim -= val;
      break;
    }
  }
  return nDepth * nPos;
}

int main(int argc, char *argv[]) {
  vector<OpCode> opCode;
  string sLine;

  while (getline(cin, sLine)) {
    auto sep_pos = sLine.find(' ');

    auto op_s = sLine.substr(0, sep_pos);
    auto val_s = sLine.substr(sep_pos + 1);

    auto op = op_s == "forward" ? Op::Forward
              : op_s == "down"  ? Op::Down
                                : Op::Up;

    auto val = stoi(val_s);

    opCode.emplace_back(op, val);
  }

  cout << partOne(opCode) << endl;
  cout << partTwo(opCode) << endl;

  return 0;
}
