#include <iostream>
using namespace std;
int main(int argc, char** argv){
   int numberArray[10] = {0};
   int input;
   cout << "Input number (-1 to quit): ";
   cin >> input;
   cout << endl;
   int pos = 0;
   while(input >= 0){
      numberArray[pos] = input;
      ++pos;
      cout << "Input number (-1 to quit): ";
      cin >> input;
      cout << endl;
   }
   cout << endl;
   cout << "Repeating back: " << endl;
   for(int i = 0; i < pos; ++i){
      cout << numberArray[i] << endl;
   }
   return 0;
}