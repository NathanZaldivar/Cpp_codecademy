#include <iostream>
#include <stdlib.h>


int main() {

  int chaos = 0, choice = 0, health = 1, damage = 1, test = 0;
  bool backup = true, angel = true, boss_skip = false, bible = false, hush = false;

  std::string logo =  R"(
................................................................................
................................................................................
................................................................................
................................................................................
................................................................................
................................@@@@@@@@@@@@@@@@................................
............................@@@@@@@@@@@@@@@@@@@@@@@@............................
........................@@@@@@@@****************@@@@@@@@........................
....................@@@@**,,,,,,.,,,.,,,.,,,.,,,.,,,,,**@@@@....................
..................@@@@**,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,**@@@@..................
................@@@@**,,,,,,,,,,.,,,,,,,,,,,,,,,.,,,,,,,,,**@@@&................
..............**@@%%.,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,%%@&**..............
..............@@@@.,,,,,.,,,,,,,.,,,,,,,.,,,,,,,.,,,,,,,.,,,,.@@@@..............
............@@@@**,,,,,,,,,,,,,,.,,,,,,,,,,,,,,,,,,,,,,,,,,,,,**@@@@............
............@@@@**,,**@@@@@@@@**.,,,,,,,,,,,,,,,**@@@@@@@@**,,**@@@@............
............@@@@**,,@@    @@@@@@.,,,,,,,,,,,,,,,@@    @@@@@@,,**@@@@............
............@@@@//**@@@@@@@@@@@@.,..@@@@@@@@.,.,@@@@@@@@@@@@**/(@@@@............
..............@@@@**@@@@@@@@@@@@.,@@@@@@@@@@@@.,@@@@@@@@@@@@**@@@@..............
..............@@@@//**@@@@@@@@**.,@@        @@.,**@@@@@@@@**//@@@@..............
................@@@@//,,,,,,,,,,.,////////////,,,,,,,,,,,,//@@@&................
..................@@@@//,,,,,,,,.,,,,,,,.,,,,,,,.,,,,,,,/(@@@@..................
....................@@@@//,,**,,.,,,,,,,,,,,,,,,,,**,,//@@@@....................
......................@@@@@@//**.,,,,,,,,,,,,,,,**/(@@@@@&......................
........................,,@@@@@@&&%%%%%%%%%%%%&&@@@@@@,,........................
........................@@@@**,,@@@@@@@@@@@@@@@@.,**@@@@........................
......................@@@@**,,,,****************,,,,**@@@&......................
......................@@@@**,.@@**,,,,,,,,,,,,**@@,,**@@@&......................
........................@@@@@@@@.,,,**@@@@**,,,,@@@@@@@@........................
..........................@@@@@@.,,,,.@@@@**,,,,@@@@@@..........................
............................@@@@@@.,,.@@@@**,,@@@@@@............................
..............................%%@@@@@@%%%%@@@@@@%%..............................
................................      ....      ................................
................................................................................
................................................................................
................................................................................
)";

  std::cout << "Welcome to The Binding of Isaac text adventure!\n\n";
  std::cout << R"(Isaac and his mother lived alone in a small house on a hill. Isaac kept to himself, drawing pictures and playing with his toys as his mom watched Christian broadcasts on the television.
Life was simple, and they were both happy.
That was, until the day Isaac's mom heard a voice from above: "Your son has become corrupted by sin! He needs to be saved!"
"I will do my best to save him, my Lord," Isaac's mother replied, rushing into Isaac's room, removing all that was evil from his life.
Again, the voice called to her:
"Isaac's soul is still corrupt! He needs to be cut off from all that is evil in this world and confess his sins."
"I will follow your instructions, Lord. I have faith in thee," Isaac's mother replied, as she locked Isaac away in his room, away from the evils of the world.
One last time, Isaac's mom heard the voice of God calling to her:
"You have done as I asked, but I still question your devotion to me. To prove your faith, I will ask one more thing of you."
"Yes, Lord. Anything," Isaac's mother begged.
"To prove your love and devotion, I require a sacrifice. Your son Isaac will be this sacrifice. Go into his room and end his life as an offering to me, to prove that you love me above all else!"
"Yes, Lord," she replied, grabbing a butcher's knife from the kitchen.
Isaac, watching through a crack in the door, trembled in fear. Scrambling around his room to find a hiding place, he noticed a trapdoor to the basement, hidden under his rug. Without hesitation, he flung open the hatch just as his mother burst through his door and threw himself down into the unknown depths below.)";
  std::cout << "\n\n\n";
  std::cout << "BEGIN GAME...\n\n";

  while (backup == true) {
    std::cout << "(Basment I-II)\n\nIsaac finds him self at the item room with no health he sees four possible options that might give him the health he needs to delve below...\n";
    std::cout << "  1) A devel room with possible black hearts\n";
    std::cout << "  2) you see a beggar, blowing him up could provide some red hearts\n";
    std::cout << "  3) blow up a tinted rock for possible soul hearts\n";
    std::cout << "  4) continue with only half a heart\n";
    std::cout << "$: ";

    std::cin >> choice;

    switch (choice) {

      case 1:
        std::cout << "\nYou find no hearts and have lost the ability to get angle items\n";
        angel = false;
        backup = false;
        break;

      case 2:
        std::cout << "\nThe beggar explodes with red health healing you 1 hit point\n";
        health += 1;
        backup = false;
        break;

      case 3:
        std::cout << "\nThe tinted rock drops 1 soul heart giving you 1 hit point\n";
        health++;
        backup = false;
        break;

      case 4:
        std::cout << "\nyou continue without looking for health like a badass\n";
        chaos += 25;
        backup = false;
        break;

      default:
        std::cout << "\nInvalid choice! Restarting.\n";
        break;
 
    }
  }
 



 std::cout << "You enter the boss room and have a 50% chance to defeat the boss without taking damage.\n";

 srand (time(NULL));

 std::cout << "\nHIT ENTER TO FLIP A COIN\n";
 system("python3 pause.py");

 int chance = rand() % 2;
 
 switch (chance) {

  case 0:
   std::cout << "Heads! you defeat the boss without losing any health\n";
   break; 
  
  case 1:
   std::cout << "Tails! you defeat the boss but take 1 hit of damage\n";
   health--;
   if (health < 1) {
    std::cout << "you have no more health! you fall over and die :(\n";
    return 0;
   }
   break;

  default:
   std::cout << "ERROR IN STAGE 1 BOSS COIN FLIP\n";
   return 0;
   break;

 }
 
 srand (time(NULL));
 chance = rand() % 2;
 backup = true;

 while (backup == true) {
  std::cout << "\n(Caves I-II)\n";
  std::cout << "You find your self in a room filled with clots you have a couple options to clear the room\n";
  std::cout << "  1) use a bomb to blow a door and escape\n";
  std::cout << "  2) use REAL skill to kill all the clots, you have a 50% chance to clear the room without taking damage\n";
  std::cout << "  3) use your ace of hearts to turn all the clots to possible health\n";
  std::cout << "  4) blow up a random rock...\n";
  std::cout << "$: ";

  std::cin >> choice;

  switch (choice) {

   case 1:
    std::cout << "You run away with your tail between your legs! While running a clot hits you with a lucky shot! You lose 1 health point!\n";
    health--;
    backup = false;
    break;
   
   case 2:
    if (chance == 0) {
     std::cout << "You use your inner lost to dodge all clot attacks and clear the room giving you a key, you use the key to open a chest health inside!\n";
     health++;
    } else {
     std::cout << "You try to dodge the clots attacks but clots are Bastards and should have not been added into the game! You lose 1 health point.\n";
     health--;
    }
    if (health < 1) {
     std::cout << "You ran out of health! GAME OVER...\n";
     return 0;
    }
    backup = false;
    break;

   case 3:
    std::cout << "You convert all clots into random hearts but its all rotten hearts! your health stays the same!\n";
    backup = false;
    break;

   case 4:
    std::cout << "You blow up a random rock and only by dumb luck does a trap door appear allowing you to skip the next boss...\n";
    backup = false;
    boss_skip = true;
    chaos += 25;
    break;

   default:
    std::cout << "Invalid choice, restarting...\n";
    break;
  }
 } 


 srand (time(NULL));
 chance = rand() % 2;
 backup = true;


 if (boss_skip != true) {

  std::cout << "You enter the boss room and have a 50% chance to defeat the boss without taking damage.\n";
  std::cout << "HIT ENTER TO FLIP A COIN\n";
  
  system("python3 pause.py");

  switch (chance) {

   case 0:
    std::cout << "Heads! you defeat the boss without losing any health\n";
    break;

   case 1:
    std::cout << "Tails! you defeat the boss but take 1 hit of damage.\n";
    health--;
    if (health < 1) {
     std::cout << "You have no more health! you fall over and die :(\n";
     return 0;
    }
    break;

   default:
    std::cout << "ERROR IN STAGE 2 BOSS COIN FLIP\n";
    return 0;
    break;
  }
 } else {
  std::cout << "You skip the boss room by going through the hatch!\n";
  boss_skip = false;
 }

 srand (time(NULL));
 chance = rand() % 2;

 while (backup == true) {
  std::cout << "\n(Depths I-II)\n";
  std::cout << "You find your self in item room with 4 chests, choose which chest to open\n";
  std::cout << "  1) Open the red chest\n";
  std::cout << "  2) Open the normal chest\n";
  std::cout << "  3) Open the golden chest\n";
  std::cout << "  4) Open the stone chest\n";
  std::cout << "$: ";

  std::cin >> choice;

  switch (choice) {
   
   case 1:
    if (angel == true) {
     std::cout << "The red chest teleports you to a angle room with a Bible! You pick up the bible and head to the boss room...\n";
     bible = true;
     backup = false;
     break;
    } else {
     std::cout << "The red chest teleports you to a devil room with health pickup! Gain 1 hit point.\n";
     health++;
    }
    chaos += 25;
    backup = false;
    break;

   case 2:
    std::cout << "The normal chest turns out to be a haunted chest! lose 1 hit point";
    health--;
    backup = false;
    break;

   case 3:
    std::cout << "You open the golden chest to find a item called ???, you wonder what use it could have...\n";
    hush = true;
    backup = false;
    chaos += 25;
    break;

   case 4:
    std::cout << "The stone chest had a soul heart! gain 1 hit point\n";
    health++;
    backup = false;
    break;

   default:
    std::cout << "Invalid choice! Restarting...\n";
    break; 
  }
 }
}
