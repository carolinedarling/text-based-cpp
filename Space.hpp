/*********************************************************************
** Program name: Space.hpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project--
** Space Class Declaration File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

#ifndef SPACE_HPP
#define SPACE_HPP


class Space {
    private:
        Space *north;
        Space *east;
        Space *south;
        Space *west;
        int optMax;

    public:
        Space(); // constructor
        ~Space(); // destructor
        
        //setters
        virtual void setNorth(Space *north);
        virtual void setEast(Space *east);
        virtual void setSouth(Space *south);
        virtual void setWest(Space *west);
        virtual void setOptMax(int optMax);
        
        //getters
        virtual Space* getNorth();
        virtual Space* getEast();
        virtual Space* getSouth();
        virtual Space* getWest();
        virtual int getOptMax();
        
        //other functions
        virtual string displayASCII(ifstream& File);
        virtual void otherOptions(int option);
        virtual void printSpace() = 0;
        virtual void printOptions() = 0;
        
}; 

#endif // SPACE_HPP