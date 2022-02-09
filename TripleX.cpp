#include <iostream>
#include <ctime>


void PrintIntro(int Difficulty)
{
     //Start of current storyline
    std::cout << "Quick, we need your help to take down the ships security systems ASAP! \n";
    std::cout << "Up ahead on your left, that door leads to the security room \n";
    std::cout << "Damn, looks like it's level " << Difficulty; 
    std::cout << " security so you'll need enter a number combination on the keypad to get in \n";
    std::cout << "You have to figure out which three numbers will get you into the security room \n";
    std::cout << "We've provided you with some hints below: \n"; 
}


bool PlayGame(int Difficulty)
{

    PrintIntro(Difficulty);

    //Declaring 3 number combo
    int CodeA = rand() % Difficulty + Difficulty;
    int CodeB = rand() % Difficulty + Difficulty;
    int CodeC = rand() % Difficulty + Difficulty;
    /*Difficulty = rand() % Diff + Diff range
    2 = 2-3
    3 = 3-5
    4 = 4-7 
    5 = 5-9
    */

    //Print sum and product
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;


    //hints
    std::cout << "  +   Enter the numbers in the order: # # #, with spaces between each number \n";
    std::cout << "  +   If you add the numbers together, you'll get " << CodeSum << std::endl;
    std::cout << "  +   When you multiply the combo, it'll give you " << CodeProduct << std::endl;

    //Store player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA  >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC; 
    int GuessProduct = GuessA * GuessB * GuessC;

    //Enter code into keypad
    if(GuessSum == CodeSum && GuessProduct == CodeProduct) 
    {
        std::cout << "ACCESS GRANTED \n";
        return true;
    }
    else
    {
        std::cout << "ACCESS DENIED";
        return false;
    }

    
}


int main() 
{
    srand(time(NULL)); //random combo based on time of day

    int LevelDifficulty = 2;
    int MaxDifficulty = 5;

    while(LevelDifficulty <= MaxDifficulty) //Loop until all levels are completed
    {
        bool bPuzzleComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); //clear errors
        std::cin.ignore(); //discard buffer

        if (bPuzzleComplete)
        {
            ++LevelDifficulty;
        }
        
    }

    std::cout << "DOOR UNLOCKED";

    return 0;
}

//Ctrl+C ends the program



/* 3D first person shooter with puzzle mechanics


general ideas

trapped in space, ship has been compromised/hacked and need to find codes
avoid enemies to get to the main terminal to contact ___ for help
enemy types(free roaming with open combat,  random encounter with rpg turn based combat, set pattern with either style)
combat (set walking pattern > open combat, spotting mechanic > turn based combat)
different puzzles for every door
at least 3 doors
small moving starwars trashcan that make a stupid ass noise
acapella music
tony's character ideas-close character ties   subtle hints for plot twists, comes out of nowhere, make it back to 'home' only to be backstabbed
    metrioid fusion storyline
    you were infected, bring it back to base and kill everyone///they try and help you until you figure out why you were trapped up there, help 'enemies' to save yourself or save everyone else



Tony {
    e
}
    

    

Logan{
    e
}


space station style ship 

characters {

    main characer   based off of how id react for now at least
     it/security-

    characters   9 total crewmates with individual personalities
        captain-
        comms expert/co captain-
        engineer(maintenance)-have parts to collect to craft items/tools/weapons
        med staff-

        SCIENTISTS
            geologist-
            biologist-
            chemist-
            astrophysicist-
}

backstory{
    out exploring a new planet that was recently found, trying to learn more about the surface and environment and other shit like that
    suddenly something knocks you unconscious and have no recalection of what has happened
    as you wake up you realize you're trapped in your room with minor injuries that you need to treat
}





PART 1

characters-2
areas-3
enemies-security system   types-turrets, biped and/or quadroped, various traps (lasers, falling objects, alarms)


You wake up on your ship stuck in you room 'by yourself' and you have no idea whats going on and you're injured, you have to go to the medbay which is close by to heal. 
After you heal yourself you encounter "the first enemy" (the security system) and realize that you have to find codes to disable the security system while exploring the ship and learning   about what happened to everyone else.
Enter the codes into keypads to unlock more areas to find hints for the next door's puzzle 


END GOAL OF PART 1: make it to the main terminal and contact ___ for help

*/
