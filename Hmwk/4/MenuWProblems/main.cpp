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

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program Homework 4"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap5 Prob1 Sum" << endl;
    cout<<"Type 2 for Gaddis 9thEd Chap5 Prob7 PayInPennies" << endl;
    cout<<"Type 3 for Gaddis 9thEd Chap5 Prob13 MinMax" << endl;
    cout<<"Type 4 for Gaddis 9thEd Chap5 Prob22 Rectangle" << endl;
    cout<<"Type 5 for Gaddis 9thEd Chap5 Prob23 Pattern" << endl;
    cin>>wchProb;
    
    //Solve Problems
    switch (wchProb) {
        case '1':
        {
            //Declare Variables
            int input, output = 0;

            //Initialize or input i.e. set variable values
            cin >> input;

            //Calculate
            for (int i = 1; i <= input; i++) {
                output += i;
            }

            //Display the outputs
            cout << "Sum = " << output;
            break;
        }
        case '2':
        {
            //Declare Variables
            int daywrked;
            double pay = 0;
            unsigned long salary = 1;

            //Initialize or input i.e. set variable values
            cin >> daywrked;

            //Map inputs -> outputs
            for (int i = 0; i < daywrked; i++) {
                pay += salary;
                salary *= 2;
            }

            //Display the outputs
            cout << "Pay = $" << fixed << setprecision(2) << pay / 100.00f;
            break;
               }
        case '3':
        {
            //Declare Variables
            int small, large, temp;

            //Initialize or input i.e. set variable values
            small = 2147483647;
            large = 0;
            while (temp != -99) {
                cin >> temp;
                if (temp > large && temp != -99) large = temp;
                if (temp < small && temp != -99) small = temp;
            }

            //Map inputs -> outputs

            //Display the outputs
            cout << "Smallest number in the series is " << small << endl;
            cout << "Largest  number in the series is " << large;

            break;
        }
        case '4':
        {
            //Declare Variables
            int num;
            char ascii;

            //Initialize or input i.e. set variable values
            cin >> num >> ascii;

            //Map inputs -> outputs

            //Display the outputs
            for (int i = 0; i < num; i++) {
                for (int j = 0; j < num; j++) {
                    cout << ascii;
                }
                if (i < num - 1) cout << endl;
            }
        }
        case '5':
        {
            //Declare Variables
            int num, num2;

            //Initialize or input i.e. set variable values
            cin >> num;

            //Display the outputs
            for (int i = 1; i < num * 2; i++) {
                if (i <= num) {
                    for (int j = 0; j < i; j++) {
                        cout << "+";
                    }
                    cout << endl << endl;
                }
            }
            for (int i = num; i > 0; i--) {
                if (i <= num) {
                    for (int j = 0; j < i; j++) {
                        cout << "+";
                    }
                    if (i != 1) cout << endl << endl;
                }
            }
        }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}