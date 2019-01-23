/* 
 * Author:  James Hartley
 * Created: January 22, 4:30PM
 * Purpose: Check if number is prime.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout << "Input a number to test if Prime." << endl;
    cin >> num;
    
    //Output data
    if (isPrime(num)) {
        cout << num << " is prime.";
    }
    else {
        cout << num << " is not prime.";
    }
    
    //Exit stage right!
    return 0;
}

bool isPrime(int n) {
    //Check if number is divisible by 2 to the inputted number
    //If we get a result with no remainder then the number is not prime.
    for(int i = 2; i <= n / 2; i++)
    {
      if(n % i == 0)
      {
          return false;
      }
    }
    
    //If we got here we went through the loop and found it is only divisble by 1 and itself.
    return true;
}