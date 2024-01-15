#pragma once
#include "Player.h"
class Bowler :
	virtual public Player
{
public:
	int noOFwikects;
	Bowler(const char*, int,int);
	Bowler(); 
	void display();
};

