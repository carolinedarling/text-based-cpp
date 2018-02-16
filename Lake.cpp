/*********************************************************************
** Program name: Lake.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Lake Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Lake.hpp"
using namespace std;

/********************************************
 ** Function: Lake
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Lake::Lake(){

 }
 
/********************************************
 ** Function: Lake
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Lake::~Lake(){

 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Lake::printSpace(){
 ifstream filename ("lake.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
 cout << "You're at the lake." << endl
 << "The glint of light on the water and" << endl
 << "the sound of the waves always calms you."<< endl << endl; 
 return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Lake::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Gaze upon the water" << endl
 << "5. Swim in the murky depths" << endl
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
void Lake::otherOptions(int option){
 if(option == 4){
  cout << "You feel eerily like some unseen force is compelling you to dive in." << endl << endl;
 } else if(option == 5){
  cout << "After a couple of laps across the dark water, you take a break and tread water near the shore." << endl
  << "It's at this point you feel like a hand reaches up from the depth and grabs your foot!" << endl
  << "You're able to get away and pull yourself onto the shore. You heart doesn't stop pounding for some time." << endl
  << "Did that really happen?" << endl << endl;
 }
 return;
}