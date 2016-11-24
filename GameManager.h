#pragma once

class GameManager {
    private:
        const char NUMBER_OF_PLAYER = 2;
        //TODO: define cv as Console View
        //TODO: define players as pointer of array(Player)
        char turn = 1;
    public:
        GameManager();
            //TODO: get array of player as parameters with call by reference
        void launch();
}