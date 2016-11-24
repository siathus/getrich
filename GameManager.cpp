#include "GameManager.h";

GameManager::GameManager() {
    /*** R-GM-1 ***/
    //TODO: initialize cv
    //TODO: register Players
}

void GameManger::launch() {
    /*** R-GM-2 ***/
    //TODO: cv.drawMapAndPlayers()

    /*** R-GM-3 ***/
    //TODO: for each players->initialize()

    for(;;) {
        /*** R-GM-5 ***/
        char dice1, dice2;
        char posBefore, pos;
        //TODO: posBefore = players.position()
        //TODO: cv.drawDice()
        //TODO: dice1, 2 = random value (1 ~ 6)
        //TODO: pos = players.move(dice1 + dice2)

        /*** R-GM-10 ***/
        if(pos < posBefore) {
            //players.salary()
        }

        /*** R-GM-6 ***/
        //TODO: switch(map[pos].type)
            //TODO: bonus game
            //TODO: uninhabited arrival
            //TODO: olympic
            //TODO: fortune card
            //TODO: world travel
            //TODO: revenue
            //TODO: start point
            //TODO: default -
                //TODO: if owner is me
                    //TODO: build a building or landmark
                //TODO: else
                    //TODO: give toll
                    /*** R-GM-12(a) ***/
                    //TODO: if player.asset <= 0
                        break;
        
        /*** R-GM-7, R-GM-8 ***/
        if (dice1 != dice2) {
            turn++;
            
            /*** R-GM-12(b) ***/
            if (turn > 30) {
                break;
            }

            /*** R-GM-9 ***/
            //TODO: check player.position() and launch special event
        }
    }

    /*** R-GM-12(c) ***/
    //TODO: cv.drawResult()
}