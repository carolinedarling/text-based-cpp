/*********************************************************************
** Program name: Lair.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Lair Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Lair.hpp"
using namespace std;

/********************************************
 ** Function: Lair
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Lair::Lair(){

 }
 
/********************************************
 ** Function: Lair
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Lair::~Lair(){

 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Lair::printSpace(){
 ifstream filename ("wizard.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
 cout << "You're in the Wizard's Lair." << endl
 << "This place crackles with the foul smell of dark magic." << endl
 << "You hear the wizard cackle and you turn to face him." << endl << endl; 
 return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Lair::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Talk to the wizard" << endl
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
void Lair::otherOptions(int option){
 if (option == 4) {
  cout << "The wizard gives you a hearty pat on the shoulder as he continues to cackle." << endl
  << "You wince at his touch, scared of what he might do." << endl
  << "\"I don't know how you found me, but a deal's a deal.\"" << endl
  << "The wizard grabs a water dipper off the wall and dips it into a nearby bubbling cauldron." << endl
  << "He hands you the dipper and barks, \"Drink up! This is the potion to cure your moonsickness.\"" << endl << endl;
 }
 return;
 
}