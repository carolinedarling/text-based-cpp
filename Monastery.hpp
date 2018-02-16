/*********************************************************************
** Program name: Monastery.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Monastery Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Space.hpp"
using namespace std;

#ifndef MONASTERY_HPP
#define MONASTERY_HPP

class Monastery : public Space {
    private:
        int lookCount;

    public:
        Monastery(); // constructor
        ~Monastery(); // destructor
        
        virtual void printSpace();
        virtual void printOptions();
        virtual void otherOptions(int option);
        
}; 

#endif // MONASTERY_HPP