/*********************************************************************
** Program name: Lake.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Lake Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef LAKE_HPP
#define LAKE_HPP

class Lake : public Space {
    public:
        Lake(); // constructor
        ~Lake(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // LAKE_HPP