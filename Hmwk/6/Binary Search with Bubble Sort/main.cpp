/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 31, 2019 1:00PM
 * Purpose: Binary Search w/Bubble Sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bblSrt(int [],int);
bool binSrch(int [],int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    bblSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    cout<<"Input the value to find in the array"<<endl;
    cin>>val;
    if(binSrch(array,SIZE,val,indx))
        cout<<val<<" was found at indx = "<<indx<<endl;

    //Exit stage right or left!
    return 0;
}

void fillAry(int a[],int n) {
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
}
void prntAry(int a[],int n,int lnCt) {
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
        if (i%10 == 9) cout << endl;
    }
    cout << endl;
}

void bblSrt(int a[], int n) {
    bool swap;
    do{
        swap=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap=true;
            }
        }
    }while(swap);
}

bool binSrch(int a[],int n,int val,int &middle) {
    int first=0,last=n-1;
    do{
        middle=(last+first)/2;
        if(a[middle]==val)return true;
        if(a[middle]<val) first = middle+1;
        else              last  = middle-1;
    }while(first<last);
    return false;
}