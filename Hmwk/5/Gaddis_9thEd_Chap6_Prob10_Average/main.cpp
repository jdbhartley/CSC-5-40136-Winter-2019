/* 
 * Author:  James Hartley
 * Created: January 23, 12:30PM
 * Purpose: Calculate average
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void getScre(int&, int&, int&, int&, int&);
float calcAvg(int, int, int, int, int);
int fndLwst(int, int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2, num3, num4, num5;
    
    //Initialize and ask for values
    cout << "Find the Average of Test Scores" << endl;
    cout << "by removing the lowest value." << endl;
    getScre(num1, num2, num3, num4, num5);
    
    //Calculate and Output
    cout << "The average test score = " << fixed << setprecision(1) << calcAvg(num1, num2, num3, num4, num5);

    //Exit stage right!
    return 0;
}

void getScre(int& n1, int& n2, int& n3, int& n4, int& n5) {
    cout << "Input the 5 test scores." << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
}

float calcAvg(int n1, int n2, int n3, int n4, int n5) {
    return (n1 + n2 + n3 + n4 + n5 - fndLwst(n1,n2,n3,n4,n5))/4.0;
}

int fndLwst(int n1, int n2, int n3, int n4, int n5) {
    if (n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) return n1;
    if (n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) return n2;
    if (n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) return n3;
    if (n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) return n4;
    if (n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4) return n5;
}