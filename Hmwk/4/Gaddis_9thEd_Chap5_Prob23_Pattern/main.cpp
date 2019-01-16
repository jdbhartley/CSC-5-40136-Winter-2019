/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: Jan 16, 2019 2:02 PM
 * Purpose: Draw arrow depending on input
 *          
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int num, num2;
    
    //Initialize or input i.e. set variable values
    cin >> num;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for (int i = 1; i < num*2; i++) {
        if (i <= num) {
            for (int j = 0; j < i; j++) {
                cout << "+";
            }
            cout << endl << endl;
        }
    }
    for (int i = num; i > 0; i--) {
        if (i <= num) {
            for (int j = 0; j < i; j++) {
                cout << "+";
            }
            if (i != 1) cout << endl << endl;
        }
    }

    //Exit stage right or left!
    return 0;
}