#include "Batsman.h"



Batsman::Batsman()
{
	totalScore = 0;

	average = 0;
}
Batsman::Batsman(const char* p, int q,int a):Player(p,q)
{
	totalScore = a;
	int s2 = 0;
	
	permatchScore = new int[matches];
	cout << "ENTER SCORE" << endl;
	for (int i = 0; i < matches; i++)
	{
		cin >> permatchScore[i];
	}
	
}
double Batsman::calculateAVG()
{
	average = totalScore / matches;
	return average;
}

void Batsman::display()
{
	Player::display();
	cout << "Total score " << totalScore << endl;
	cout << "Average " << calculateAVG() << endl;
	cout << "PER MATCH SCORE:" << endl;
	for (int i = 0; i < matches; i++)
		cout << i + 1 << "_" << permatchScore[i] << endl;
	
}
