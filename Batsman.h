#pragma once
#include "Player.h"
class Batsman :
	virtual public Player
{
public:
	int totalScore;
	int* permatchScore;
	int average;
	Batsman();
	Batsman(const char*, int,int );
	double calculateAVG();
	void display();

};

