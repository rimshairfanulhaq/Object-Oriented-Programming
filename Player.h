#pragma once
#include<iostream>
using namespace std;
class Player
{
public:
	char* name;
	int matches;
	Player();
	Player(const char*, int);
	void display();
	
};

