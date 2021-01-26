//CRUSH IT
#include <iostream>
using namespace std;
int main(int argc, char** argv){
   int numberArray[10] = {0};
   int input;
   //Prompts user for a positive integer
   cout << "Input number (-1 to quit): ";
   cin >> input;
   cout << endl;
   int pos = 0;
   while(input >= 0){
      //If the user input is positive, puts the input into the first available position in numberArray
      numberArray[pos] = input;
      ++pos;
      
      //Prompts user for the next input
      cout << "Input number (-1 to quit): ";
      cin >> input;
      cout << endl;
   }
   cout << endl;
   //Reads out all values that were just put into numberArray
   cout << "Repeating back: " << endl;
   for(int i = 0; i < pos; ++i){
      cout << numberArray[i] << endl;
   }
   return 0;
}