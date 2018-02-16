/*********************************************************************
** Program name: River.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** River Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef RIVER_HPP
#define RIVER_HPP

class River : public Space {
    public:
        River(); // constructor
        ~River(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // RIVER_HPP