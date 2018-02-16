/*********************************************************************
** Program name: Mountains.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Mountains Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef MOUNTAINS_HPP
#define MOUNTAINS_HPP

class Mountains : public Space {
    public:
        Mountains(); // constructor
        ~Mountains(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // MOUNTAINS_HPP