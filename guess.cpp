#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
  int my_num = 12;
  
  while(true)
    {
      int guess = 0;
      cout << "Guess a Number: ";
      cin >> guess;
      
      if(guess == my_num)
	break;

      cout << endl;
    }

  cout << "Correct!" << endl; 

  return 0;
}
