#include <iostream>
#include <string>
using namespace std;

void getInput(float& feet, float& inches){
   cout << "Enter the number of feet: ";
   cin >> feet;
   cout << endl << "Enter the number of inches: ";
   cin >> inches;
   cout << endl;
   if(inches >= 12){
      ++feet;
      inches = inches - 12;
   }
}

void calculate(float feet, float inches, float& meters, float& centimeters){
   meters = feet * 0.3048;
   centimeters = (inches / 12.0) * 0.3048 * 100;
}

void output(float feet, float inches, float meters, float centimeters){
   cout << feet << " feet is " << meters << " meters." << endl;
   cout << inches << " inches is " << centimeters << " centimeters." << endl;
   cout << endl;
}

int main(int argc, char** argv){
   float feet;
   float inches;
   float meters;
   float centimeters;
   string userInput;
   do{
      getInput(feet, inches);
      calculate(feet, inches, meters, centimeters);
      output(feet, inches, meters, centimeters);
      cout << "Type 'exit' to exit the program." << endl;
      cout << "Type anything else to continue." << endl;
      cin >> userInput;
      if(userInput != "exit"){
         cout << "Repeating" << endl;
         cout << endl;
      }
   } while(userInput != "exit");
   
   return 0;
}