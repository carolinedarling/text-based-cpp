/*********************************************************************
** Program name: Monastery.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Monastery Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Monastery.hpp"
using namespace std;

/********************************************
 ** Function: Monastery
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Monastery::Monastery(){
     lookCount = 0;
 }
 
/********************************************
 ** Function: Monastery
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Monastery::~Monastery(){
     
 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Monastery::printSpace(){
 ifstream filename ("monastery.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
 cout << "You're in the abandoned monastery." << endl
 << "No one has worshipped here in centuries." << endl << endl; 
 return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Monastery::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Look around the monastery." << endl
 << "You can enter 0 to give up." << endl;
 return;
}

/********************************************
 ** Function: otherOptions
 ** Description: Runs other options (not
 * keep walking, or inventory) for space
 ** Arguments: int option
 ** Returns: N/A
 *******************************************/  
void Monastery::otherOptions(int option){
 if(option == 4 && lookCount == 0){
  cout << "You look around the cobweb filled ruins, in case the wizard hides his lair here." << endl
  << "All you find is lots of spiders and a few coins." << endl << endl;
 } if(option == 4 && lookCount > 0){
  cout << "You look around the ruins again, but find nothing." << endl << endl;
 }
 lookCount++;
 return;
}