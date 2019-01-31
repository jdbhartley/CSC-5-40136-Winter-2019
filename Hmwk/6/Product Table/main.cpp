/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 30, 2019 1:00PM
 * Purpose: Product Table
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    fillTbl(tablSum,ROWS);
    
    //Display the outputs
    prntTbl(tablSum,ROWS);

    //Exit stage right or left!
    return 0;
}

void fillTbl(int table[][COLS],int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows; j++) {
            table[i][j] = i*j;
        }
    }
}

void prntTbl(const int table[][COLS],int rows) {
cout<< "Think of this as a Product/Muliplication Table" << endl;
cout<< "           C o l u m n s"               << endl;
cout<< "     |   1   2   3   4   5   6"         << endl;
cout<< "----------------------------------"     << endl;
    for (int i = 1; i <= rows; i++) {
        if (i==2) cout << "R  " << i << " |";
        else if (i==3) cout << "O  " << i << " |";
        else if (i==4) cout << "W  " << i << " |";
        else if (i==5) cout << "S  " << i << " |";
        else cout << "   " << i << " |";
        
        for (int j = 1; j <= rows; j++) {
            if (table[i][j] > 9) cout << "  " << table[i][j];
            else cout << "   " << table[i][j];
        }
        cout << endl;
    }
}