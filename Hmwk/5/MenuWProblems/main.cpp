/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 10, 2019, 12:46 PM
 * Purpose:  Menu example
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>     //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
//Factorial
int fctrl(int);//Function to write for this problem

//isPrime
bool isPrime(int);//Determine if the input number is prime.

//MinMax
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Collatz
int collatz(int);//3n+1 sequence

//Collatz Sequence with output
int collatz2(int);//3n+1 sequence

//Present Value
float psntVal(float, float, int);

//Average
void getScre(int&, int&, int&, int&, int&);
float calcAvg(int, int, int, int, int);
int fndLwst(int, int, int, int, int);

//Time converter
void input(int&, int&);
void conv(int, int, int&, char&);
void output(int, int, int, char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Factorial"<<endl;
    cout<<"Type 2 for isPrime"<<endl;
    cout<<"Type 3 for MinMax"<<endl;
    cout<<"Type 4 for Collatz Sequence"<<endl;
    cout<<"Type 5 for Collatz Sequence w/Output"<<endl;
    cout<<"Type 6 for Gaddis 9thEd Chap6 Prob9 Present Value"<<endl;
    cout<<"Type 7 for Gaddis 9thEd Chap6 Prob10 Average"<<endl;
    cout<<"Type 8 for Savitch 9thEd Chap5 Prob1 TimeConverter"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':
        {
            //Declare Variables
            int num;
            
            //Process/Map inputs to outputs
            cout << "This program calculates the factorial using a function prototype found in the template for this problem." << endl;
            cout << "Input the number for the function." << endl;
            cin >> num;

            //Output data
            cout << num << "! = " << fctrl(num);
                    break;
        }
        case '2':
        {
            //Declare Variables
            int num;

            //Process/Map inputs to outputs
            cout << "Input a number to test if Prime." << endl;
            cin >> num;

            //Output data
            if (isPrime(num)) {
                cout << num << " is prime.";
            } else {
                cout << num << " is not prime.";
            }
            break;
        }
        case '3':
        {
            //Declare Variables
            int num1, num2, num3, min, max;

            //Initialize Variables
            cout << "Input 3 numbers" << endl;
            cin >> num1 >> num2 >> num3;

            //Process/Map inputs to outputs
            minmax(num1, num2, num3, min, max);
            
            //Output data
            cout << "Min = " << min << endl;
            cout << "Max = " << max;
            break;
        }
        case '4': 
        {
            //Declare Variables
            int n;

            //Initialize Variables
            cout << "Collatz Conjecture Test" << endl;
            cout << "Input a sequence start" << endl;
            cin>>n;

            //Process/Map inputs to outputs
            cout << "Sequence start of " << n << " cycles to 1 in " <<
                    collatz(n) << " steps";
            break;
        }
        case '5':
        {
            //Declare Variables
            int n, ns;

            //Initialize Variables
            cout << "Collatz Conjecture Test" << endl;
            cout << "Input a sequence start" << endl;
            cin>>n;

            //Process/Map inputs to outputs
            ns = collatz2(n);

            //Output data
            cout << "Sequence start of " << n << " cycles to 1 in " <<
                    ns << " steps";
            break;
        }
        case '6':
        {
            //Declare Variables
            float ftrVal, intRate, yrs;

            //Initialize and ask for values
            cout << "This is a Present Value Computation" << endl;
            cout << "Input the Future Value in Dollars" << endl;
            cin >> ftrVal;
            cout << "Input the Number of Years" << endl;
            cin >> yrs;
            cout << "Input the Interest Rate %/yr" << endl;
            cin >> intRate;

            //Calculate and Output
            cout << "The Present Value = $" << fixed << setprecision(2) << psntVal(ftrVal, intRate, yrs) + 0.01;
            break;
        }
        case '7':
        {
            //Declare Variables
            int num1, num2, num3, num4, num5;

            //Initialize and ask for values
            cout << "Find the Average of Test Scores" << endl;
            cout << "by removing the lowest value." << endl;
            getScre(num1, num2, num3, num4, num5);

            //Calculate and Output
            cout << "The average test score = " << fixed << setprecision(1) << calcAvg(num1, num2, num3, num4, num5);
            break;
        }
        case '8':
        {
            //Declare Variables
            int hours, mins, hoursReg;
            char ampm, yesNo;

            //Initialize and ask for values
            yesNo = 'Y';
            cout << "Military Time Converter to Standard Time" << endl;
            cout << "Input Military Time hh:mm" << endl;
            do {
                input(hours, mins);

                //Calculate and Output
                //check validation
                if (hours > 24 || mins > 60) {
                    cout << hours << ":" << mins << " is not a valid time" << endl;
                } else {
                    conv(hours, mins, hoursReg, ampm);
                    output(hours, mins, hoursReg, ampm);
                }

                cout << "Would you like to convert another time (y/n)" << endl;
                cin >> yesNo;

            } while (toupper(yesNo) == 'Y');
        }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}

int fctrl(int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++ ) {
        result *= i;
    }
    
    return result;
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
void minmax(int n1, int n2, int n3, int& min, int& max) {
    if (n1 >= n2 && n1 >= n3) max = n1;
    if (n2 >= n1 && n2 >= n3) max = n2;
    if (n3 >= n1 && n3 >= n2) max = n3;
    if (n1 <= n2 && n1 <= n3) min = n1;
    if (n2 <= n1 && n2 <= n3) min = n2;
    if (n3 <= n1 && n3 <= n2) min = n3;
}
int collatz(int n) {
    int steps = 1;
    
    do {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n *= 3;
            n += 1;
        }
        steps++;
    } while (n != 1);
    
    return steps;
}
int collatz2(int n) {
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
float psntVal(float F, float r, int n) {
    //Convert interest rate to decimal
    r /= 100;
    
    return (F/(pow((1.0+r), n)));
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
void input(int& hours, int& mins) {
    //Get timeIn as string
    string timeIn;
    cin >> timeIn;
    
    //Get position of the hh:mm seperator ':'
    int pos = timeIn.find(':');
    
    //Convert it into 2 strings at the seperator
    string shour = timeIn.substr( 0, pos );
    string smin = timeIn.substr( pos+1, timeIn.length()+1  );
    
    //Convert our 2 strings into integers
    hours = std::stoi( shour );
    mins = std::stoi( smin );
}

void conv(int hours, int mins, int& hoursReg, char& ampm) {
    if (hours > 12) {
        hours -= 12;
        hoursReg = hours;
        ampm = 'P';
    }
    else if ( hours == 12) {
        ampm = 'P';
        hoursReg = hours;
    }
    else if (hours == 0) {
        hours = 12;
        hoursReg = hours;
        ampm = 'A';
    }
    else {
        ampm = 'A';
        hoursReg = hours;
    }
}

void output(int hours, int mins, int hoursReg, char ampm) {
    if (hours!=0) cout << hours << ":" << mins << " = " << hoursReg << ":" << mins << " " << ampm << "M" << endl;
    if (hours==0) cout << "00" << ":" << mins << " = " << hoursReg << ":" << mins << " " << ampm << "M" << endl;
}