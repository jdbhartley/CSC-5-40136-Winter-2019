/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: Jan 16, 2019 1:47 PM
 * Purpose: Let user enter series of numbers then display min and max.
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
    int small, large, temp;
    
    //Initialize or input i.e. set variable values
    small = 2147483647;
    large = 0;
    while (temp != -99)
    {
        cin >> temp;
        if (temp > large && temp != -99) large = temp;
        if (temp < small && temp != -99) small = temp;
    }
    
    //Map inputs -> outputs
    
    //Display the outputs
    cout << "Smallest number in the series is " << small << endl;
    cout << "Largest  number in the series is " << large;

    //Exit stage right or left!
    return 0;
}