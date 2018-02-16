/*********************************************************************
** Program name: Mountains.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Mountains Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Mountains.hpp"
using namespace std;

/********************************************
 ** Function: Mountains
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Mountains::Mountains(){
  
 }
 
/********************************************
 ** Function: Mountains
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Mountains::~Mountains(){

 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Mountains::printSpace(){
  ifstream filename ("mountains.txt");
  cout << displayASCII(filename) << endl;
  filename.close();
  cout << "You're in the ominous Prosk mountains." << endl
  << "They're always so dark and gloomy." << endl << endl; 
  return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Mountains::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Wander the mountains" << endl
 << "You can enter 0 to give up." << endl;
 return;
}

/********************************************
 ** Function: otherOptions
 ** Description: Runs other options (not
 * keep walking, or inventory) for space
 ** Arguments: int options
 ** Returns: N/A
 *******************************************/  
void Mountains::otherOptions(int option){
if(option == 4){
  cout << "You hike for some time and find what at first glance looked like just another boulder, " << endl
  << "with ancient runes engraved into it. But, you notice that this one has a large keyhole. Hm." << endl << endl;
}
return;
}

