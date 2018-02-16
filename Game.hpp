/*********************************************************************
** Program name: Game.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Game Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>

#include "Space.hpp"
#include "Home.hpp"
#include "Lair.hpp"
#include "Lake.hpp"
#include "Monastery.hpp"
#include "Mountains.hpp"
#include "River.hpp"
#include "Town.hpp"

using namespace std;

#ifndef GAME_HPP
#define GAME_HPP


class Game {
    private:
        vector<string> inventory;
        int stepcount;
        int option;
        int keepWalking;
        int invChoice;
        bool key;
        bool climb;

    public:
        Game(); // constructor
        ~Game(); // destructor
        
        //settters
        void setSteps(int stepcount);
        
        //getters
        int getSteps();
        
        //other functions
        void displayMenu();
        void inputValidation(int &input, int min, int max);
        void displayIntro();
        void displayCredits();
        void displayInventory();
        void displayDirection();
        void runGame();
        
}; 

#endif // GAME_HPP