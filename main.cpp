/*********************************************************************
** Program name: main.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project -- Main
** This program runs a text-based fantasy game with a step-counter
** being the limiting factor to hasten you into winning the game.
** To play, compile all files and type /final. Thank you
*********************************************************************/

#include <iostream>
#include <iomanip>
#include "Game.hpp" 

using namespace std;


int main(){
    bool loop = false;
    int menuChoice;
    
    Game g;
    
    do{
        g.displayMenu();
        g.inputValidation(menuChoice, 1, 3);
        
        switch(menuChoice){
            case 1: { // Play Game
                g.runGame();
                break;
            } 
            case 2: { // Credits
                g.displayCredits();
                break;
            }
            case 3: { // Exit the Program
                cout << "Thanks for playing!" << endl << endl << endl;
                loop = true;
                break;
            }
            
            default: {
                cout << "Invalid input." << endl;
                break;
            } 
        } 
    }while(!loop); 

    return 0;
}