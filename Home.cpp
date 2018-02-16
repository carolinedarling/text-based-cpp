/*********************************************************************
** Program name: Home.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Home Class Implementation File
*********************************************************************/
#include "Home.hpp"
using namespace std;

/********************************************
 ** Function: Home
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Home::Home(){
 
 }
 
/********************************************
 ** Function: Home
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Home::~Home(){
 
 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Home::printSpace(){
 ifstream filename ("home.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
 cout << "You're at home. A damp old cottage surrounded by your sheep herd. Home sweet home." << endl << endl;
 return;
} 
 
/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Home::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Check on the sheep" << endl
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
void Home::otherOptions(int option){
 if(option == 4){
  cout << "The sheep seem healthy enough. They're a little nervous around you. I wonder why." << endl << endl;
 }
 return;
};