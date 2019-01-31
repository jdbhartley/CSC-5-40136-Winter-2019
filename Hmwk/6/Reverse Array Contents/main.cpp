/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 30, 2019 1:33PM
 * Purpose: Reverse the Array
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    //Initialize array
    for (int i = 0; i < SIZE; i++) {
        cin >> test[i];
    }
    
    for (int i = 0; i < SIZE; i++) {
        cout << test[SIZE-i-1] << " ";
        if (i%10 == 9) cout << endl;
    }

    //Exit stage right or left!
    return 0;
}