#include "Player.h"

Player::Player()
{
	name = nullptr;
	matches = 0;
}
Player::Player(const char* a, int b)
{
	int sizee = 0;
	for (int i = 0; a[i] != '\0'; i++)
	{
		
			sizee = sizee + 1;
	}
	name = new char[sizee + 1];
	for (int i = 0; i < sizee; i++)
	{
		name[i] = a[i];
	}
	name[sizee] = '\0';
	matches = b;

}
void Player::display()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Matches: " << matches << endl;
}