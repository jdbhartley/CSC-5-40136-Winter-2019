/* 
 * Author:  James Hartley
 * Created: January 22, 5:10PM
 * Purpose: Collatz Sequence calculate # of steps till 1 with output.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//3n+1 sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int n) {
    int steps = 1;
    
    while (n > 1) {
        if (steps != 1) cout << " " << n << ",";
        else cout  << n << ",";
        steps++;
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n += 1;
        }
    }
    
    cout << " " << n << endl;
    return steps;
}