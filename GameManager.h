#pragma once
//#include "dice.h"

class GameManager {
    private:
        /*** R-GM-2-1 ***/
        const char NUMBER_OF_PLAYER = 2;
        //TODO: define cv as Console View
        //TODO: define players as pointer of array(Player)
        char turn = 1;
        //Dice dice;
    public:
        GameManager();
            //TODO: get array of player as parameters with call by reference
        void launch();
}