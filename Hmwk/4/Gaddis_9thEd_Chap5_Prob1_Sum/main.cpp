/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: Jan 16, 2019 1:47 PM
 * Purpose: Enter number and sum it up 1 + 2 + 3 + 4 etc.
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
    int input, output = 0;
    
    //Initialize or input i.e. set variable values
    cin >> input;
    
    //Calculate
    for (int i = 1; i <= input; i++) {
        output += i;
    }
    
    //Display the outputs
    cout << "Sum = " << output;

    //Exit stage right or left!
    return 0;
}