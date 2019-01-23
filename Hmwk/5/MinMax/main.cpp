/* 
 * Author:  James Hartley
 * Created: January 22, 4:30PM
 * Purpose: Output min and max
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, num3, min, max;
    
    //Initialize Variables
    cout << "Input 3 numbers" << endl;
    cin >> num1 >> num2 >> num3;
    
    //Process/Map inputs to outputs
    minmax(num1,num2,num3,min,max);
    //Output data
    cout << "Min = " << min << endl;
    cout << "Max = " << max;
    
    //Exit stage right!
    return 0;
}

void minmax(int n1, int n2, int n3, int& min, int& max) {
    if (n1 >= n2 && n1 >= n3) max = n1;
    if (n2 >= n1 && n2 >= n3) max = n2;
    if (n3 >= n1 && n3 >= n2) max = n3;
    if (n1 <= n2 && n1 <= n3) min = n1;
    if (n2 <= n1 && n2 <= n3) min = n2;
    if (n3 <= n1 && n3 <= n2) min = n3;
}