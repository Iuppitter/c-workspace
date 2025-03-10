#include <iostream>
#include <ctime>

using namespace std;

void wait(float seconds);
void rpapers(string userinput, int &uscr, int &cscr);

int main(void)
{
   srand(time(0));
   string input;
   char again = 'y';
   int uscr = 0;
   int cscr = 0;

   while (again == 'y')
   {
      while (true)
      {
         cout << "rock, paper, scissors?" << endl;
         cin >> input;

         if (input == "rock" || input == "paper" || input == "scissors")
            break;

         cout << "type rock, paper, scissors only." << endl;
      }
      rpapers(input, uscr, cscr);
      cout << "Do you want to play again?" << endl << "y | n" << endl;
      cin >> again;
      while (true)
      {
      if (again == 'y' || again == 'n')
         break;
      cout << "only type y | n" << endl;
      cin >> again;
      }
   }
   cout << "##Scores##" << endl << "You: " << uscr << " | Computer: " << cscr << endl;

   return 0;
}

void wait(float seconds)
{
   time_t start = time(0);
   while (time(0) - start < seconds);
}

void rpapers(string userinput, int &uscr, int &cscr)
{
   int result = 1 + (rand() % 3);
   int choice = 0;
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

   wait(0.4);
   cout << "Rock!" << endl;
   wait(0.5);
   cout << "Paper!" << endl;
   wait(0.5);
   cout << "Scissors!" << endl;
   wait(0.5);

   cout << "Computer chose " << computeroutput << "." << endl;

   if ((choice == 1 && result == 3) || (choice == 2 && result == 1) || (choice == 3 && result == 2))
   {
      cout << "You win!" << endl;
      uscr++;
   }
   else if (choice == result)
      cout << "Draw!" << endl;
   else
   { 
      cout << "You lose!" << endl;
      cscr++;
   }
}
