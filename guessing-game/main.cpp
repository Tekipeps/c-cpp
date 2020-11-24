#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

using namespace std;

// Get random number btw 0 and 99
int getRandomNum()
{
  srand(time(NULL));
  unsigned int numberToGuess = rand() % 100;
  return numberToGuess;
}

int main()
{
  int randNum = getRandomNum();
  int playersNumber{};
  int tries = 5;
  while (tries > 0) {
    cout << "Guess a number btw 0 and 99: ";
    cin >> playersNumber;
    if(playersNumber == randNum){
      cout << "Congratulations!!! You guessed right " << randNum << endl;
      return 0;
    }
    tries -= 1;
    if(tries > 0){
      cout << "Wrong guess, You have " << tries << " tries left,\n";
      playersNumber > randNum ? cout << "Your guess was higher.. " : cout << "Your guess was lower..";
      cout << endl;
    }
    else {
      cout << "Failure!!! The secret number is: " << randNum << endl;
    }
  }
  return 0;
}
