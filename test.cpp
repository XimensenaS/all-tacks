#include <cassert>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

enum note { DO = 1, RE = 2, MI = 4, FA = 8, SOL = 16, LA = 32, SI = 64 };

int main() {
  int melody[2];
  for (int i = 0; i < 2; ++i) {
    cout << "Inter notes:";
    string notes;
    int sum_notes = 0;
    cin >> notes;
    for (int j = 0; j < notes.length(); j++) {
      int sound = notes[j] - '1';
      sum_notes |= 1 << sound;
    }
    melody[i] = sum_notes;
  }
  for (int i = 0; i < 2; ++i) {
    if (melody[i] & DO) {
      std::cout << "DO"
                << " ";
    }
    if (melody[i] & RE) {
      std::cout << "RE"
                << " ";
    }
    if (melody[i] & MI) {
      std::cout << "MI"
                << " ";
    }
    if (melody[i] & FA) {
      std::cout << "FA"
                << " ";
    }
    if (melody[i] & SOL) {
      std::cout << "SOL"
                << " ";
    }
    if (melody[i] & LA) {
      std::cout << "LA"
                << " ";
    }
    if (melody[i] & SI) {
      std::cout << "SI"
                << " ";
    }
    cout << endl;
  }
}