#include <iostream>
using namespace std;

int main() {
  char binaryNumber[] = "0101010101010101010101010101010101";
  string session = "y";
  while (session == "y") {

    cout << "\nEnter a Binary number (1s and 0s): ";
    cin >> binaryNumber;
    cout << "\n";

    cout << stoi(binaryNumber, 0, 2);
    session = "y";
    cout << "\nContinue session? [y/n]\n";
    cin >> session;
    cout << "\x1B[2J\x1B[H";
  } // end of session
  cout << "Credit to https://geeksforgeeks.org/ for helping me with some of "
          "this code!\n";
  return 1;
}