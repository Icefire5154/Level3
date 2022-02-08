#include <iostream>

int main() 
{
    //Start of current storyline
    std::cout << "Quick, we need your help to take down the ships security systems ASAP!";
    std::cout << std::endl;
    std::cout << "Up ahead on your left, thats the door to the security room!";
    std::cout << std::endl; 
    std::cout << "Damn, looks like you'll need enter a number combination on the terminal to get in.";
    std::cout << std::endl;
    std::cout << "You have to figure out which 3 numbers will get you into the security room, and FAST.";
    std::cout << std::endl;
    std::cout << "We've provided you with some hints below: "; 


    //Declaring 3 number combo
    int CodeA = 8;
    int CodeB = 5;
    int CodeC = 2;

    //Print sum and product
    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;


    //hints
    std::cout << std::endl;
    std::cout << "  +   If you add the numbers together, you'll get " << CodeSum << std::endl;
    std::cout << "  +   When you multiply the combo, it'll give you " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    std::cin >> GuessA; 
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "you entered: " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    

    int GuessProduct = GuessA * GuessB * GuessC;



    return 0;
}



/* 3D first person puzzle shooter


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
