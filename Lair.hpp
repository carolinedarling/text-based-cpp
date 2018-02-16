/*********************************************************************
** Program name: Lair.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Lair Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef LAIR_HPP
#define LAIR_HPP

class Lair : public Space {
    public:
        Lair(); // constructor
        ~Lair(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // LAIR_HPP