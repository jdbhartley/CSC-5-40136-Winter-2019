/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 30, 2019 1:00PM
 * Purpose: Calculate standard deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
float avgX(float [],int);//Calculate the Average
float variance(float[], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    cout<< fixed << setprecision(7) << "The average            = "<<avgX(test,SIZE)<<endl;
    cout<< fixed << setprecision(7) << "The standard deviation = "<<sqrt(variance(test,SIZE))<<endl;

    //Exit stage right or left!
    return 0;
}

void  init(float a[],int size) {
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }
}

float variance(float a[], int size) {
    float b[size];
    float avg = avgX(a, size);
    float result = 0;
    
    for (int i = 0; i < size; i++) {
        //Subtract average and square result
        b[i] = a[i]-avg;
        b[i] *= b[i];
    }
    
    for (int i = 0; i < size; i++) {
        result += b[i];
    }
    
    return result/(size-1);
}

float avgX(float a[],int size) {
    float result = 0;
    for (int i = 0; i < size; i++) {
        result += a[i];
    }
    
    return result/size;
}