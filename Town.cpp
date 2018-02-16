/*********************************************************************
** Program name: Town.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Town Class Implementation File
*********************************************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Town.hpp"
using namespace std;

/********************************************
 ** Function: Town
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Town::Town(){
     wiseCount = 0;
     libCount = 0;
 }
 
/********************************************
 ** Function: Town
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Town::~Town(){

 } 

/********************************************
 ** Function: printSpace
 ** Description: Prints initial space description
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/ 
void Town::printSpace(){
 ifstream filename ("town.txt");
 cout << displayASCII(filename) << endl;
 filename.close();
  cout << "You're in Altstein's town square." << endl
  << "Alstein is an ancient, dusty town with a dirt road and" << endl
  << "a handful of inhabitants. Everyone knows everyone." << endl << endl; 
 return;
}

/********************************************
 ** Function: printOptions
 ** Description: Prints options for the space
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/  
void Town::printOptions(){
 cout << "What do you want to do?" << endl
 << "1. Keep walking" << endl
 << "2. Use inventory" << endl
 << "3. Map" << endl
 << "4. Talk to the old wise woman." << endl
 << "5. Talk to the travelling librarian." << endl
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
void Town::otherOptions(int option){
 if(option == 4){
  if(wiseCount == 0){
   cout << "You tell the old wise woman your story, and ask her about the cure to being a werewolf." << endl
   << "She says, \"I am sensitive to your plight, but I cannot cure you. Only the wizard can do that." << endl
   << "However, I will give you this rare pearl that may help you on your journey.\"" << endl
   << "I found it by the lake many years ago." << endl << endl;
  }else{
   cout << "She tells you, \"I found that rare pearl by the lake, you know. Every blessing" << endl
   << "in your journey. Be bold!\"" << endl << endl;
  }
  wiseCount++;
 }else if(option == 5){
  if(libCount == 0){
   cout << "He says, \"I'm chuffed to see you here, citizen! I have a book that might interest you!\"" << endl
  << "He hands you a book Dead Languages. When you think he's not looking, you rip out a page on runes." << endl
  << "They remind you of symbols you saw on the wizard's cloak." << endl << endl;
  } else {
   cout << "The travelling librarian wants \"nothing to do with people who rip pages from books.\"" << endl << endl;
  }
  libCount++;
 }
 return;
}