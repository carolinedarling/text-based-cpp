/*********************************************************************
** Program name: Space.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Space Class Implementation File
*********************************************************************/
#include "Space.hpp"
using namespace std;

/********************************************
 ** Function: Space
 ** Description: Constructor, sets
 ** all directions as NULL until set later
 ** by setNorth for derived classes.
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Space::Space(){
  this->north = NULL;
  this->east = NULL;
  this->south = NULL;
  this->west = NULL;
     
 }
 
/********************************************
 ** Function: ~Space
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Space::~Space(){
  setOptMax(0);
 } 
 
/********************************************
 ** Function: setNorth
 ** Description: Setter for north
 ** Arguments: Pointer to a Space object
 ** Returns: N/A
 *******************************************/
void Space::setNorth(Space *north){
 this->north = north;
 return;
}

/********************************************
 ** Function: setEast
 ** Description: Setter for east
 ** Arguments: Pointer to a Space object
 ** Returns: N/A
 *******************************************/
void Space::setEast(Space *east){
 this->east = east;
 return;
}

/********************************************
 ** Function: setSouth
 ** Description: Setter for south
 ** Arguments: Pointer to a Space object
 ** Returns: N/A
 *******************************************/
void Space::setSouth(Space *south){
 this->south = south;
 return;
}

/********************************************
 ** Function: setWest
 ** Description: Setter for west
 ** Arguments: Pointer to Space object
 ** Returns: N/A
 *******************************************/
void Space::setWest(Space *west){
 this->west = west;
 return;
}

 /********************************************
 ** Function: setOptMax
 ** Description: setter for optMax
 ** Arguments: int optMax
 ** Returns: N/A
 *******************************************/
void Space::setOptMax(int optMax){
 this->optMax = optMax;
 return;
}

/********************************************
 ** Function: getNorth
 ** Description: Getter for north
 ** Arguments: N/A
 ** Returns: north
 *******************************************/
Space* Space::getNorth(){
 return this->north;
}

/********************************************
 ** Function: getEast
 ** Description: Getter for east
 ** Arguments: N/A
 ** Returns: east
 *******************************************/
Space* Space::getEast(){
 return this->east;
}

/********************************************
 ** Function: getSouth
 ** Description: Getter for south
 ** Arguments: N/A
 ** Returns: south
 *******************************************/
Space* Space::getSouth(){
 return this->south;
}

/********************************************
 ** Function: getWest
 ** Description: Getter for west
 ** Arguments: N/A
 ** Returns: west
 *******************************************/
Space* Space::getWest(){
 return this->west;
}

/********************************************
 ** Function: getOptMax
 ** Description: getter for optMax
 ** in subclasses 
 ** Arguments: N/A
 ** Returns: optMax
 *******************************************/
int Space::getOptMax(){
 return this->optMax;
}
 
 /********************************************
 ** Function: displayASCII
 ** Description: Prints ASCII art
 ** Arguments: ifstream& File
 ** Returns: N/A
 *******************************************/
string Space::displayASCII(ifstream& File){
    string str = "";
    
    if(File){
        while(File.good()){
            string strTemp;
            getline(File, strTemp);
            strTemp += "\n";
            
            str += strTemp;
        }
        return str;
    } else {
        cout << "ERROR printing ASCII art.";
    }
}

 /********************************************
 ** Function: otherOptions
 ** Description: virtual function redefined
 ** in subclasses 
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Space::otherOptions(int option){
  return;
 }
 
/********************************************
 ** Function: virtual void printSpace() = 0;
 ** Description: pure virtual function redefined
 ** in subclasses 
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 
 /********************************************
 ** Function: virtual void printOptions() = 0;
 ** Description: pure virtual function redefined
 ** in subclasses 
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/