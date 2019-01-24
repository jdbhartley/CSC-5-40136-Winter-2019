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
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4 Prob10 MathTutor"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap3 Prob19 MonthlyPayment"<<endl;
    cout<<"Type 3 for Savitch 9thEd Chap2 Prob1 SodaPop"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
                    //Set the random number seed
                    srand(static_cast<unsigned int>(time(0)));

                    //Declare all Variables Here
                    unsigned short op1,op2,answer,test;

                    //Input or initialize values Here
                    op1=rand()%900+100;//3 digit number   [100-999]
                    op2=rand()%999+1;  //1-3 digit number [1-999]

                    //Process/Calculations Here
                    answer=op1+op2;

                    //Output Located Here
                    cout<<setw(6)<<op1<<endl;
                    cout<<"+"<<setw(5)<<op2<<endl;
                    cout<<"------"<<endl;
                    cout<<(answer<1000?"   ":"  ");
                    cin>>test;
                    cout<<endl<<(answer==test?"Correct Answer":"Incorect Answer")<<endl;

                    break;
               }
        case '2':{
                    //Declare Variables
                    float monPymt,//Monthly Payment in $'s
                          intRate,//Interest Rate per year
                          loanAmt,//Loan amount in $'s
                          totPaid,//Total amount paid in $'s
                          intPaid;//Interest paid
                    int   nMnths;//Number of months

                    //Initialize or input i.e. set variable values
                    cout<<"Loan calculator program"<<endl;
                    cout<<"Input Loan Amount in $'s,"<<endl<<
                          "Interest Rate in %/yr, "<<endl<<
                          "and the number of Months to pay"<<endl;
                    cin>>loanAmt>>intRate>>nMnths;

                    //Map inputs -> outputs
                    intRate/=CNVYRMN;//Convert to %/month
                    intRate/=PERCENT;//Convert to decimal value per month
                    float temp=pow(1+intRate,nMnths);//Utility Variable
                    monPymt=intRate*temp*loanAmt/(temp-1);//Monthly payment
                    int iPymt=(monPymt+HALFPNY)*PENNIES;//Convert Payment to Pennies
                    monPymt=iPymt/PENNIES;//Converting back to Dollars
                    totPaid=monPymt*nMnths;//Total amount paid back
                    intPaid=totPaid-loanAmt;//Interest paid

                    //Display the outputs
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"Loan Amount      = $"<<setw(10)<<loanAmt<<endl;
                    cout<<"Interest Rate    =  "<<setw(10)<<intRate*PERCENT<<"%/month"<<endl;
                    cout<<"Number of months =  "<<setw(7)<<nMnths<<endl;
                    cout<<"Monthly Payment  = $"<<setw(10)<<monPymt<<endl;
                    cout<<"Total Payment    = $"<<setw(10)<<totPaid<<endl;
                    cout<<"Interest Paid    = $"<<setw(10)<<intPaid<<endl;

                    break;
               }
        case '3':{
                    //Declare Variables
                    float   wD,//Weight in lbs of the dieter
                            ms,//Mass of sweetener that killed mouse in grams
                            mm,//Mass of mouse in grams
                            msp,//Mass of soda pop in grams
                            csp;//Soda pop concentration
                    int nCans;//Number of cans 

                    //Initialize or input i.e. set variable values
                    ms=5;     //5 grams that kill the mouse
                    mm=35;    //35 grams mass of mouse
                    msp=350;  //350 grams in a soda pop can
                    csp=.001f;//1/10 of 1%
                    cout<<"Program to calculate limit of Soda Pop Consumption"<<endl;
                    cout<<"Input the desired dieters weight in lbs"<<endl;
                    cin>>wD;

                    //Map inputs -> outputs
                    //nCans=wD*CNVLBGR*ms/mm/msp/csp;
                    nCans=wD*CNVLBGR*ms/(mm*msp*csp);

                    //Display the outputs
                    cout<<"The maximum number of soda pop cans"<<endl;
                    cout<<"which can be consumed are = "<<nCans<<endl;

                    break;
               }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}