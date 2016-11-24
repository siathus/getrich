#include <iostream>
#include <Windows.h>
#include "dice.h"
using namespace std;

Dice::Dice(){
	dicePoint = new int[2];
}

Dice::~Dice(){
	this->dicePoint = NULL;
	delete[] this->dicePoint;
}

//return pointer as array with first dice and second dice points
int* Dice::getDicePoint(){
	this->dicePoint[0] = this->firstDice;
	this->dicePoint[1] = this->secondDice;
	return this->dicePoint;
}

//roll dice until space bar inputs
//TODO) R-CV-5 show progress bar while pushing space bar
void Dice::rollDice(){
	printf("If you push space bar, dice starts to roll and if you release, it stops.\n");

	while ((GetAsyncKeyState(VK_SPACE) & 0x8000) == FALSE){
		system("cls");
		this->firstDice = rand() % 7 + 1;
		this->secondDice = rand() % 7 + 1;
		this->showDice(this->firstDice);
		this->showDice(this->secondDice);
	}
}

//show the dice of the value from parameter
void Dice::showDice(int point){
	switch (point){
	case 1:
		printf("忙式式式忖\n");
		printf("弛﹛﹛﹛弛\n");
		printf("弛﹛∞﹛弛\n");
		printf("弛﹛﹛﹛弛\n");
		printf("戌式式式戎\n");
		break;
	case 2:
		printf("忙式式式忖\n");
		printf("弛∞﹛﹛弛\n");
		printf("弛﹛﹛﹛弛\n");
		printf("弛﹛﹛∞弛\n");
		printf("戌式式式戎\n");
		break;
	case 3:
		printf("忙式式式忖\n");
		printf("弛∞﹛﹛弛\n");
		printf("弛﹛∞﹛弛\n");
		printf("弛﹛﹛∞弛\n");
		printf("戌式式式戎\n");
		break;
	case 4:
		printf("忙式式式忖\n");
		printf("弛∞﹛∞弛\n");
		printf("弛﹛﹛﹛弛\n");
		printf("弛∞﹛∞弛\n");
		printf("戌式式式戎\n");
		break;
	case 5:
		printf("忙式式式忖\n");
		printf("弛∞﹛∞弛\n");
		printf("弛﹛∞﹛弛\n");
		printf("弛∞﹛∞弛\n");
		printf("戌式式式戎\n");
		break;
	case 6:
		printf("忙式式式忖\n");
		printf("弛∞∞∞弛\n");
		printf("弛﹛﹛﹛弛\n");
		printf("弛∞∞∞弛\n");
		printf("戌式式式戎\n");
		break;
	}
}