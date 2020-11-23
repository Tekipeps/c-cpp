#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // Generate unique random numbers using current time.
  srand(time(NULL));
  // Get random number btw 0 and 99
  unsigned int numberToGuess = rand() % 100;
  cout << "Guess a number btw 0 and 99 " << endl;

  unsigned int playersNumber{};
  cin >> playersNumber;

  cout << "You guessed: " << playersNumber
       << "\nThe actual number was: " << numberToGuess << endl;
  return 0;
}
