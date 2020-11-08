#include <iostream>
#include "strCalc.h"

#include "Blackjack.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Blackjack Game_1;
    Game_1.add_player();
    Game_1.init_game();
    Game_1.start_game();

    return 0;
}
