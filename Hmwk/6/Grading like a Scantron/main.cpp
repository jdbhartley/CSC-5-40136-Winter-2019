/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 30, 2019 1:00PM
 * Purpose: Grading like a scantron
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(const string &);
void read(string &);
int  compare(const string &,const string &,string &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    float pRight;
    
    //Initialize or input i.e. set variable values
    read(key);
    read(answers);
    
    //Score the exam
    pRight=compare(key,answers,score);
    
    //Display the outputs
    //cout<<"Key     ";print(key);
    //cout<<"Answers ";print(answers);
    cout<<"C/W     ";print(score);
    cout<<"Percentage Correct = "<<pRight/(score.size()/2)*100<<"%"<<endl;
    

    //Exit stage right or left!
    return 0;
}

void print(const string &output) {
    cout << output << endl;
}

void read(string &str) {
    getline(cin, str);
    str.erase (0, 8);
}

int  compare(const string &key,const string &answer,string &score) {
    int result = 0;
    for (int i = 0; i < key.size(); i++) {
        if (key[i] != ' ') {
            if (key[i] == answer[i]) {
                score += 'C';
                result++;
            }
            else {
                score += 'W';
            }
            score += ' ';
        }
    }
    
    return result;
}