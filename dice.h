#pragma once

class Dice{
private:
	int* dicePoint;
	int firstDice;
	int secondDice;
public:
	Dice();
	void rollDice();
	void showDice(int point);
	int* getDicePoint();
	~Dice();
};

