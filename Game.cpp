/*********************************************************************
** Program name: Game.cpp
** Author: Merry Caroline Purser
** Date: 08/08/17
** Description: CS162 Final Project --- 
** Game Class Implementation File
*********************************************************************/
#include "Game.hpp"
using namespace std;

/********************************************
 ** Function: Game
 ** Description: Constructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Game::Game(){
     
 }
 
/********************************************
 ** Function: Game
 ** Description: Destructor
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 Game::~Game(){
     
 } 
 
 /********************************************
 ** Function: setSteps
 ** Description: setter for the step counter
 ** Arguments: integer to set stepcount
 ** Returns: N/A
 *******************************************/
 void Game::setSteps(int stepcount){
     this->stepcount = stepcount;
     return;
 };
 
 /********************************************
 ** Function: getSteps
 ** Description: getter for the step counter
 ** Arguments: N/A
 ** Returns: integer to set stepcount
 *******************************************/
 int Game::getSteps(){
     return this->stepcount;
 };
 
 
 /********************************************
 ** Function: displayMenu
 ** Description: Prints the menu.
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Game::displayMenu(){
    Space* sheep = new(Home);
    ifstream filename ("sheep.txt");
    cout << sheep->displayASCII(filename) << endl;
    filename.close();
    delete sheep;
    cout<<setfill('*')<<setw(80)<<"*"<<endl << endl; 
    cout << "~*~ The Adventures of Ada! ~*~" << endl;
    cout << "1. Run Game" << endl
    << "2. Credits" << endl
    << "3. Quit Game" << endl << endl;
    cout<<setfill('*')<<setw(80)<<"*"<<endl; 
    return;
}

 /********************************************
 ** Function: inputValidation
 ** Description: Validates the user input by 
 ** ensuring it is not above the maximum or 
 ** below the minimum amount.
 ** Arguments: an int by reference of what we 
 ** want the user to input, and int of the min, and 
 ** and int of the max input.
 ** Returns: N/A
 *******************************************/
void Game::inputValidation(int &input, int min, int max){
   
    input = -1;
    bool valid = false;
    
    do{
        cin >> input;
        if(cin.good()){  
            if((input < min) || (input > max)){
                cout << "Invalid input. Enter a number between " << min << " and " << max << "." << endl;
            } else {
                valid = true;
                cout << endl;
            }
        } else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input. Enter a number between " << min << " and " << max << "." << endl;
        }
    } while (!valid);
    return;
}

 /********************************************
 ** Function: displayIntro
 ** Description: Prints the intro paragraph.
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Game::displayIntro(){
    
    cout << endl << "The Opening Scene: " << endl << endl
    << "Your name is Ada. You are a shepherdess in the highlands of Altstein, " << endl
    << "near the Prosk mountains. One night you are awoken by your sheep screaming!" << endl
    << "Something is killing them! There are wolves around these parts." << endl
    << "You rush out, armed with a dagger, ready to protect your flock." << endl
    << "You killed the largest wolf you had ever encountered in your life, but not before it badly " << endl
    << "injured you with a vicious bite. The bite throbbed and stinged for days and " << endl
    << "nights on end. " << endl << endl
    << "During the next full moon, you had a terrible nightmare. You became " << endl
    << "a wolf and roamed the mountains, killing sheep." << endl << endl
    << "You realize your nightmare was reality, when a mysterious and strangely attractive " << endl
    << "wizard arrived and smacked you on the head with his wand." << endl << endl
    << "\"You've killed the wrong sheep, stupid wolf. My sheep! You don't deserve " << endl
    << "to ever be a human. In fact, wouldn't it be fun to keep you this way forever?\"" << endl << endl
    << "Before you could bark or run, the wizard mumbled a powerful spell over you." << endl
    << "Small blue fireworks burst from the tip of his wand and fell on your cold wolf nose." << endl << endl
    << "\"The wizard code mandates I must make you a deal. So, here it is:" << endl
    << "Every time you take a step, you come closer to your fate." << endl
    << "In 1000 steps, if you have yet to find me, you will turn" << endl 
    << "into a wolf forever. You shall be my pet, and I shall raise you to guard my sheep." << endl << endl
    << "Shall you find me before your 1000th step, I will be forced to cure your moonsickness. \"" << endl
    << "With that, the wizard tapped his wand on his gray head and disappeared." << endl << endl
    << "You ran back home, terrified. You fell asleep and just woke up in human form." << endl << endl
    << "TL;DR: Find the wizard before your 1000th step or be a werewolf forever!" << endl << endl
    << "Good luck on your journey!" << endl << endl;  
    
    cout << "Tip: Each move around the map takes 100 steps!" << endl << endl;
    
    return;
}

 /********************************************
 ** Function: displayCredits
 ** Description: Prints the Credits
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Game::displayCredits(){
    cout << endl << "Credits: " << endl << endl
    << "This game was programmed and written by Merry Caroline Purser." << endl
    << "Special thanks to Oregon State University and Stack Overflow for all their help." << endl
    << "Credits for the ASCII art:" << endl
    << "the home: http://www.asciiworld.com/ " << endl
    << "the wizard: http://ascii.co.uk/art/wizard" << endl
    << "the wolf: http://www.ascii-art.de/ascii/uvw/wolf.txt" << endl
    << "the sheep: http://www.heartnsoul.com/ascii_art/sheep.txt" << endl
    << "the lake: http://www.chris.com/ascii/joan/www.geocities.com/SoHo/7373/swim.html" << endl
    << "the monastery: http://www.chris.com/ascii/index.php?art=objects/castles" << endl
    << "the mountains: http://www.ascii-code.com/ascii-art/nature/mountains.php" << endl
    << "the river: http://www.ascii-code.com/ascii-art/nature/waterfall.php" << endl
    << "the town: http://ascii.co.uk/art/town" << endl
    << "the book: http://www.chris.com/ascii/index.php?art=objects/books" << endl 
    << "the pearl: http://ascii.co.uk/art/sphere" << endl 
    << "the key: http://ascii.co.uk/art/key" << endl 
    << "the money bag: http://www.angelfire.com/ca/mathcool/unsorted.html" << endl
    << "the trophy: http://ascii.co.uk/art/trophy" << endl
    << "the cauldron: http://ascii.co.uk/art/cauldron" << endl << endl;
    
    return;
}

 /********************************************
 ** Function: displayInventory
 ** Description: Prints the inventory
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
void Game::displayInventory(){ 
    if(inventory.empty()){
        cout << "Your inventory is empty. Huh. You have nothing." << endl << endl;
    } else {
        for (int i=0; i < inventory.size(); i++){    
        cout << i << ". " << inventory[i] << endl;
        }
        cout << "Which do you use?" << endl << endl;
    }
    
    return;
};

 /********************************************
 ** Function: displayDirection
 ** Description: Prints the direction menu
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
void Game::displayDirection(){ 
    cout << "Which way do you go?" << endl
    << "1. North" << endl
    << "2. East" << endl
    << "3. South" << endl
    << "4. West" << endl << endl;
    
    return;
};

 /********************************************
 ** Function: runGame
 ** Description: Creates the necessary objects
 ** to run the game and sets the game up. Then,
 ** runs the game. After running the game,
 ** deletes the objects created.
 ** Arguments: N/A
 ** Returns: N/A
 *******************************************/
 void Game::runGame(){

    Space *currentSpace;
    Space *home = new Home();
    Space *lair = new Lair();
    Space *lake = new Lake();
    Space *monastery = new Monastery();
    Space *mountains = new Mountains();
    Space *river = new River();
    Space *town = new Town();
    
    home->setNorth(mountains);
    home->setEast(monastery);
    lair->setSouth(mountains);
    lake->setEast(river);
    lake->setSouth(monastery);
    lake->setWest(mountains);
    monastery->setNorth(lake);
    monastery->setEast(town);
    monastery->setWest(home);
    mountains->setNorth(lair);
    mountains->setEast(lake);
    mountains->setSouth(home);
    river->setSouth(town);
    river->setWest(lake);
    town->setNorth(river);
    town->setWest(monastery);
    
    key = false;
    climb = false;
    currentSpace = home;
    setSteps(1000); 
    home->setOptMax(4);
    lair->setOptMax(4);
    lake->setOptMax(5);
    monastery->setOptMax(4);
    mountains->setOptMax(4);
    river->setOptMax(4);
    town->setOptMax(5);
    const int SIZE = 5;
    

    ifstream filename1 ("wolf.txt");
    cout << currentSpace->displayASCII(filename1) << endl;
    filename1.close();
    displayIntro();
    
    
    do{
        option = -1;

            currentSpace->printSpace();
            currentSpace->printOptions();
            cout << "Steps left: " << getSteps() << endl << endl;
            
            inputValidation(option, 0, currentSpace->getOptMax());
            if(option == 0){  // GIVE UP
                setSteps(-1);
                
            } else if(option == 1){ // KEEP WALKING
                keepWalking = -1;
                displayDirection();
                inputValidation(keepWalking, 1, 4);
                
                if(keepWalking == 1 && currentSpace->getNorth() != NULL){
                    if (currentSpace == mountains){ 
                            cout << "You can't go that way." << endl << endl;
                    
                    } else {
                    currentSpace = currentSpace->getNorth();
                    setSteps((getSteps() - 100));
                    
                    }
                
                } else if (keepWalking == 2 && currentSpace->getEast() != NULL) {
                    currentSpace = currentSpace->getEast();
                    setSteps((getSteps() - 100));
                    
                } else if (keepWalking == 3 && currentSpace->getSouth() != NULL) {
                    currentSpace = currentSpace->getSouth();
                    setSteps((getSteps() - 100));
                    
                } else if (keepWalking ==4 && currentSpace->getWest() != NULL) {
                    currentSpace = currentSpace->getWest();
                    setSteps((getSteps() - 100));
                    
                } else {
                    cout << "You can't go that way." << endl << endl;
                }
                
            }else if(option == 2){ //USE INVENTORY
                invChoice = -1;
                displayInventory();
                
                if(!inventory.empty()){
                    inputValidation(invChoice, 0, (inventory.size() - 1));
                    cout << "You try using your " << inventory[invChoice] << "." << endl;
                    if(inventory[invChoice] == "rare pearl" && currentSpace == lake){
                        cout << "You hold your pearl up in the light." << endl 
                        << "A beautiful woman pokes her head out of the water. She is looking directly at your pearl." << endl
                        << "\"Come here, mortal. I am the nymph of this lake, and that is my pearl." << endl
                        << "I lost it on the bank decades ago. Would you be willing to trade it for this?\"" << endl
                        << "With those words, the nymph disappears under the water, but moments later a feminine" << endl
                        << "webbed hand holds up a strange golden key." << endl << endl;
                            inventory.erase(inventory.begin() + invChoice);
                            inventory.push_back("strange golden key");
                            ifstream filename2 ("key.txt");
                            cout << currentSpace->displayASCII(filename2) << endl;
                            filename2.close();
                            cout << endl << "~*~ OBTAINED: strange golden key ~*~" << endl << endl;
                            
                    } else if(inventory[invChoice] == "page on runes" && currentSpace == mountains && climb == true){
                        key = true;
                        cout << "You approach the boulder with the keyhole and read" << endl
                        << "its runes aloud, and they glow blue and purple with magic." << endl
                        << "The keyhole becomes big enough to allow for your key to be used." << endl << endl;
                    
                    } else if(inventory[invChoice] == "strange golden key" && currentSpace == mountains && climb == true){
                        if(key == true){
                            cout << "You insert the key into the boulder. " << endl
                            << "When you turn the key, the boulder rolls aside!" << endl << endl;
                            currentSpace = currentSpace->getNorth();
                            
                        }else{
                            cout << "The runes on the boulder turn blood red, and the keyhole seems to close" << endl
                            << "before you can get the key in. Hmm..." << endl << endl;
                            
                        }
                    } else {
                        cout << "It doesn't seem very useful here." << endl << endl;
                    }
                
                }
            } else if(option == 3) { // MAP
                ifstream filename3 ("map.txt");
                cout << currentSpace->displayASCII(filename3) << endl;
                filename3.close();
            
            } else { // RUN OTHER OPTIONS
                currentSpace->otherOptions(option);
                
                if(currentSpace == mountains && option == 4){
                    setSteps((getSteps() - 100));
                    climb = true;
                } else if(currentSpace == lair && option == 4){
                    if(!(find(inventory.begin(), inventory.end(), "The Cure") != inventory.end())){
                        inventory.push_back("The Cure");
                    }
                } else if(currentSpace == monastery && option == 4){ // 2 cents
                        if(!(find(inventory.begin(), inventory.end(), "2 cents") != inventory.end())){
                            inventory.push_back("2 cents");
                                ifstream filename4 ("coins.txt");
                                cout << currentSpace->displayASCII(filename4) << endl;
                                filename4.close();
                            cout << endl << "~*~ OBTAINED: 2 cents ~*~" << endl << endl;
                        } 
                } else if(currentSpace == town){
                    if(option == 4){ 
                        if(!(find(inventory.begin(), inventory.end(), "rare pearl") != inventory.end()) && !(find(inventory.begin(), inventory.end(), "strange golden key") != inventory.end())){
                            inventory.push_back("rare pearl");
                            ifstream filename5 ("pearl.txt");
                            cout << currentSpace->displayASCII(filename5) << endl;
                            filename5.close();
                            cout << endl << "~*~ OBTAINED: rare pearl ~*~" << endl << endl;
                        } 
                    } else if(option == 5){ 
                        if(!(find(inventory.begin(), inventory.end(), "page on runes") != inventory.end())){
                            inventory.push_back("page on runes");
                            ifstream filename6 ("book.txt");
                            cout << currentSpace->displayASCII(filename6) << endl;
                            filename6.close();
                            cout << endl << "~*~ OBTAINED: page on runes ~*~" << endl << endl;
                        } 
                    }
                }
                
                if(inventory.size() > SIZE){ // size limit on inventory
                  inventory.erase(inventory.begin() + SIZE);  
                }
                
            }
            
    }while((getSteps() > 0) && !(find(inventory.begin(), inventory.end(), "The Cure") != inventory.end()));
    
    if( find(inventory.begin(), inventory.end(), "The Cure") != inventory.end() ){ // WIN
        ifstream filename7 ("cauldron.txt");
        cout << currentSpace->displayASCII(filename7) << endl;
        filename7.close();
        
        cout << "You immediately gulp down the potion the wizard has given you." << endl
        << "It tastes like pomegranates and warm summer days." << endl 
        << "The wizard scowls as a happiness pours over your body." << endl
        << "He says, \"You are cured! Can't you get out of here!\" " << endl
        << "You go home and spend the rest of your days peacefully watching over your flock." << endl
        << "No one, except the wise old woman, ever hears about your werewolf bite or run in with a wizard ever again." << endl << endl;
        
        ifstream filename9 ("trophy.txt");
        cout << currentSpace->displayASCII(filename9) << endl;
        filename9.close();
        
        cout << "~*~ YOU WIN!~*~" << endl << endl << "Thank you for playing The Adventures of Ada!" << endl << endl;

    } else if (getSteps() <= 0) { // LOSE
        cout << "A searing pain throughout your body causes you to collapse." << endl
        << "Every muscle in your body burns as you morph into a large wolf." << endl
        << "Just as your human screams of pain turn into wolf yelps, the wizard magically appears." << endl
        << "He is laughing, because you are cursed to be his wolf-pet for the rest of your days." << endl
        << "As the days go by, you slowly forget ever having been human." << endl
        << "YOU LOSE." << endl << endl;
        
        ifstream filename10 ("wolf.txt");
        cout << currentSpace->displayASCII(filename10) << endl;
        filename10.close();
            
        cout << "Thank you for playing The Adventures of Ada!" << endl << endl;
        
    }

        delete home;
        delete lair;
        delete lake;
        delete monastery;
        delete mountains;
        delete river;
        delete town;
        
        if(!inventory.empty()){
            inventory.clear();
        }
        
    return;
    }
    
