 #include <iostream>
 #include <ctime>

using namespace std;

void rpapers(string userinput)
{
   int result = 1 + (rand() % 3);
   int choice = 10;
   string computeroutput;

   if (userinput == "rock")
      choice = 1;
   else if (userinput == "paper")
      choice = 2;
   else if (userinput == "scissors")
      choice = 3;
   else 
      cout << "type rock, paper, scissors only." << endl;

   if (result == 1)
      computeroutput = "rock";
   else if (result == 2)
      computeroutput = "paper";
   else if (result == 3)
      computeroutput = "scissors";

   cout << "Computer chose " << computeroutput << "." << endl;

   if ((choice == 1 && result == 3) || (choice == 2 && result == 1) || (choice == 3 && result == 2))
      cout << "You win!" << endl;

   else if (choice == result)
      cout << "Draw!" << endl;

   else
      cout << "You lose!" << endl;
}

int main(void)
{
   srand(time(0));

   string input;

    while (true)
   {
      cout << "rock, paper, scissors?" << endl;
      cin >> input;

      if (input == "rock" || input == "paper" || input == "scissors")
         break;

      cout << "type rock, paper, scissors only." << endl;
   }

   rpapers(input);

   return 0;
}