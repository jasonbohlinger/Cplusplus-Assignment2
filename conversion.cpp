//CRUSH IT
#include <iostream>
#include <string>
using namespace std;

//Function that gets the user input for feet and inches
void getInput(float& feet, float& inches){
   cout << "Enter the number of feet: ";
   cin >> feet;
   cout << endl << "Enter the number of inches: ";
   cin >> inches;
   cout << endl;
   //If the user enters a value for inches that is over 12, feet is incremented and inches is reset to a value less than 12
   while(inches >= 12){
      ++feet;
      inches = inches - 12;
   }
}

//Function that converts feet to meters and inches to centimeters
void calculate(float feet, float inches, float& meters, float& centimeters){
   meters = feet * 0.3048;
   centimeters = (inches / 12.0) * 0.3048 * 1000;
}

//Function that ouptuts feet, inches, meters, and centimeters to the console
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
   //Allows the user to convert multiple lengths without having to re-run the program. Runs AT LEAST once
   do{
      getInput(feet, inches);
      calculate(feet, inches, meters, centimeters);
      output(feet, inches, meters, centimeters);
      //User must type "exit" in order to exit this loop and finish the program
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