// Player Imp file

#include "Player.h"

Player::Player(char colourLetter, string colour, int x, int y)
{
	playerLetter = colourLetter;
	playerColour = colour;
	xCoordinate = x;
	yCoordinate = y;
	
	isAlive = true;
	
}

void Player::setCoordinates(int x, int y)
{
	xCoordinate = x;
	yCoordinate = y;
}

void Player::setPlayerInput(vector <vector <char> > boardVector)
{
	cout << "Input the move for the " << playerColour << " player(U, D, L, R,)\n";
	cin >> playerInput;
	
	if (playerInput == 'U' || playerInput == 'u' )
	{
		xCoordinate--;   
	}
	
	else if (playerInput == 'D' || playerInput == 'd')
	{
		xCoordinate++;
	}
	
	else if (playerInput == 'L' || playerInput == 'l')
	{
		yCoordinate--;
	}
	
	else if (playerInput == 'R' || playerInput == 'r')
	{
		yCoordinate++;
	}
		
	if ( !(xCoordinate < boardVector.size() && xCoordinate >= 0 && yCoordinate < boardVector.size()  && yCoordinate >= 0 && boardVector[xCoordinate][yCoordinate] == ' '))
	{
		isAlive = false;
	}
	
	
	
}
