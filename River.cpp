/*********************************************************************
** Program name: River.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** River Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "River.hpp"
using namespace std;

/********************************************
 ** Function: River
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 River::River(){

 }
 
/********************************************
 ** Function: River
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 River::~River(){

 } 
 
/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void River::printSpace(){
 ifstream filename ("river.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
  cout << "You're at the river of Altstein." << endl
  << "Everyone does their laundry and bathes here." << endl << endl;
  return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void River::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Bathe" << endl
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
void River::otherOptions(int option){
 if(option == 4){
  cout << "You're all fresh and clean now. Nice." << endl << endl;
 }
 return;
}
