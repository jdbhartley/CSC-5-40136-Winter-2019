/* 
 * File:   main.cpp
 * Author: James Hartley
 * Created: January 16, 1:47PM
 * Purpose: Get min/max of value's keep collecting untill user enters -99
 *           
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int daywrked;
    double pay = 0;
    int salary = 1;
    
    //Initialize or input i.e. set variable values
    cin >> daywrked;

    //Map inputs -> outputs
    for (int i = 0; i < daywrked; i++) {
        pay += salary;
        salary *= 2;
    }
    
    //Display the outputs
    cout << "Pay = $" << fixed << setprecision(2) << pay/100.00f;

    //Exit stage right or left!
    return 0;
}