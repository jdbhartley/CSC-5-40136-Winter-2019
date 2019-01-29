/* 
 * File:    main.cpp
 * Author:  James Hartley
 * Created: January 14, 2019, 5:28 PM
 * Purpose: Klondike, The classic Dice Game.
 */

#include <iostream>//IO Stream.
#include <iomanip> //IO Manipulation, for formatting
#include <fstream> //File Stream, for reading in the rules.
#include <cstdlib> //Random numbers
#include <ctime>   //Time library.
using namespace std;

int main(int argc, char** argv) {
    //Set the random seed
    srand(time(0));

    //Variables
    char        menuSel;    //Menu Selection   
    
    ifstream    ifs;        //Input File stream.
    
    string      rules;      //Rules.
    
    float       money,      //Amount of money the player has.
                betAmt;     //Amount of bet.
    
    bool        play;       //Are we currently playing the game?
    
    //Initialize
    play = false;
    money = 1000;
    
    //Intro
    cout << "*******************************" << endl;
    cout << "****        Klondike       ****" << endl;
    cout << "****     The Dice Game     ****" << endl;
    cout << "****          By           ****" << endl;
    cout << "****     James Hartley     ****" << endl;
    cout << "*******************************" << endl;
    cout << "         -------------         " << endl;
    
    //Display Menu
    cout << setfill('.');
    cout << "P" << setw(30) << "Play" << endl;
    cout << "R" << setw(30) << "Rules" << endl;
    cout << "E" << setw(30) << "Exit" << endl;
    cout << "Please input a selection..." << endl;
    cin >> menuSel;
    
    //Check menu selection
    switch (toupper(menuSel)) {
        case 'P':
            play = true;
            cout << fixed << setprecision(2);
            while (play && money > 0)
            {
                //Play the game
                cout << "         -------------         " << endl;
                cout << "Your Money: $" << money << endl;
                cout << "Enter your bet: $";
                cin >> betAmt;
                cout << "Banker Rolls" << endl;
                
                //Roll the dice for the banker
                
                //Display dice roll for the banker
                
                //Roll the dice for the player
                
                //Display dice roll for the player
                
                //Check for pairs
                
                //Determine winner
                
                //Ask to play again
                if (money > 0) {
                    cout << endl << "Play Again? (Y or N) ";
                }
                else {
                    cout << endl << "Game Over! You ran out of money.";
                    play = false;
                }
                
                cin >> menuSel;
                if (toupper(menuSel) == 'N') {
                    play = false;
                }   
            }
            break;
        case 'R':
            //Display Rules
            ifs.open("rules.dat");
            while (!ifs.eof()) {
                getline(ifs, rules);
                cout << rules << endl;
            }
            ifs.close();
            cout << endl << endl << "Restart the game to play" << endl;
            break;
        case 'E':
            //Exit
            cout << "Goodbye!";
            return 0;
    }
    
    //Exit
    return 0;
}

