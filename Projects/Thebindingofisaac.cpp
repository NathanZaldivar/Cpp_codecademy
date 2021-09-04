#include <iostream>
#include <stdlib.h>

int main() {

  int chaos = 0, choice = 0, health = 1;
  bool backup = true, angel = true;

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
  std::cout << "BEGIN GAME...";

  while (backup = true) {
    std::cout << "(Basment I-II)\n\nIsaac find him self at the boss room with no health he sees four possible options that might give him the health he needs to delve below...\n";
    std::cout << "  1) A devel room with possible black hearts\n";
    std::cout << "  2) you see a beggar, blowing him up could provide some red hearts\n";
    std::cout << "  3) blow up a tinted rock for possible soul hearts\n";
    std::cout << "  4) continue with only half a heart\n";
    std::cout << "$: ";

    std::cin >> choice;

    switch (choice) {

      case 1:
        std::cout << "You find no hearts and have lost the ability to get angle items\n";
        angel = false;
        backup = false;
        break;
      
      case 2:
        std::cout << "The beggar explodes with red health healing you 1 hit point\n";
        health += 1;
        backup = false;
        break;
      
      case 3:
        std::cout << "The tinted rock drops 1 soul heart giving you 1 hit point\n";
        health++;
        backup = false;
        break;
      
      case 4:
        std::cout << "you continue without looking for health like a badass\n";
        chaos += 25;
        backup = false;
        break;

      default:
        std::cout << "Invalid choice! Restarting.";
        break;







    }

}

}
