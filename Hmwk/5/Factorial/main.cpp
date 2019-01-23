/* 
 * Author:  James Hartley
 * Created: January 22, 4:30PM
 * Purpose: Calculate factorial of a number.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
    cout << "Input the number for the function." << endl;
    cin >> num;
    
    //Output data
    cout << num << "! = " << fctrl(num);
    
    //Exit stage right!
    return 0;
}

int fctrl(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++ ) {
        result *= i;
    }
    
    return result;
}