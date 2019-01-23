/* 
 * Author:  James Hartley
 * Created: January 23, 1:25PM
 * Purpose: Convert military time to regular time.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void input(int&, int&);
void conv(int, int, int&, char&);
void output(int, int, int, char);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int hours, mins, hoursReg;
    char ampm, yesNo;
    
    //Initialize and ask for values
    yesNo = 'Y';
    cout << "Military Time Converter to Standard Time" << endl;
    cout << "Input Military Time hh:mm" << endl;
    do {
        input (hours, mins);
        
        //Calculate and Output
        //check validation
        if (hours > 24 || mins > 60){
           cout << hours << ":" << mins << " is not a valid time" << endl;
        }
        else {
            conv(hours, mins, hoursReg, ampm);
            output(hours, mins, hoursReg, ampm);
        }
        
        cout << "Would you like to convert another time (y/n)" << endl;
        cin >> yesNo;
    } while (toupper(yesNo) == 'Y');
    //Exit stage right!
    return 0;
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
    }
}

void output(int hours, int mins, int hoursReg, char ampm) {
    cout << hours << ":" << mins << " = " << hoursReg << ":" << mins << " " << ampm << "M" << endl;
}