/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: Jan 16, 2019 1:47 PM
 * Purpose: Display rectangle based on user input
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
    int num;
    char ascii;
    
    //Initialize or input i.e. set variable values
    cin >> num >> ascii;
    
    //Map inputs -> outputs
    
    //Display the outputs
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << ascii;
        }
        if (i < num-1) cout << endl;
    }

    //Exit stage right or left!
    return 0;
}