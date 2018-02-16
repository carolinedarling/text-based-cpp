/*********************************************************************
** Program name: Home.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Home Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
#include "Space.hpp"
using namespace std;

#ifndef HOME_HPP
#define HOME_HPP

class Home : public Space {
    public:
        Home(); // constructor
        ~Home(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // HOME_HPP