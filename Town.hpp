/*********************************************************************
** Program name: Town.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Town Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef TOWN_HPP
#define TOWN_HPP

class Town : public Space {
    private:
        int wiseCount;
        int libCount;

    public:
        Town(); // constructor
        ~Town(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);

}; 

#endif // TOWN_HPP