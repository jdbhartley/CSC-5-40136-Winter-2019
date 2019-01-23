/* 
 * Author:  James Hartley
 * Created: January 23, 12:30PM
 * Purpose: Find out present value
 */

//System Libraries
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal(float, float, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float ftrVal, intRate;
    int yrs;
    
    //Initialize and ask for values
    cout << "This is a Present Value Computation" << endl;
    cout << "Input the Future Value in Dollars" << endl;
    cin >> ftrVal;
    cout << "Input the Number of Years" << endl;
    cin >> yrs;
    cout << "Input the Interest Rate %/yr" << endl;
    cin >> intRate;
    
    //Calculate and Output
    cout << "The Present Value = $" << psntVal(ftrVal, intRate, yrs) << endl;
    

    //Exit stage right!
    return 0;
}

float psntVal(float F, float r, int n) {
    //Convert interest rate to decimal
    r /= 100;
    
    return (F/(pow((1.0+r), n)));
}