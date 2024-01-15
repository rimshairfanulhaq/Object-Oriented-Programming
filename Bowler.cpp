#include "Bowler.h"




Bowler::Bowler(const char* g, int k,int d):Player(g,k)
{
	noOFwikects = d;
}
Bowler::Bowler()
{
	noOFwikects = 0;
}
void Bowler::display()
{
	Player::display();
	cout << "No. of wickets: " << noOFwikects << endl;
}