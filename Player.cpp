#include <string>
#include <iostream>

#include "Player.h"
using namespace std;


// Constructor
Player::Player()
{
	isAlive = true;
}


void Player::calculate_player_move(char **boardArray, char moveInput )
{

	if (moveInput == 'U' || moveInput == 'u' )
	{
		xCoordinate--;   
	}
	
	else if (moveInput == 'D' || moveInput == 'd')
	{
		xCoordinate++;
	}
	
	else if (moveInput == 'L' || moveInput == 'l')
	{
		yCoordinate--;
	}
	
	else if (moveInput == 'R' || moveInput == 'r')
	{
		yCoordinate++;
	}
		
	if ( !(xCoordinate < size && xCoordinate >= 0 && yCoordinate < size && yCoordinate >= 0 && array[xCoordinate][yCoordinate] == ' '))
	{
		isAlive = false;
	}
		
}

void Player::receiveBoardSize(int boardSize)
{
	size = boardSize;
	
}

void Player::receiveBoardArray(char** boardArray)
{
	array = boardArray;
	
}

void Player::print(bool redIsAlive, bool blueIsAlive)
{
	if (!redIsAlive && !blueIsAlive)
	{
		cout << "The game is a draw!\n";
	}
	
	else if (!redIsAlive)
	{
		cout << "The blue player wins!\n";
	}
	
	else if (!blueIsAlive)
	{
		cout << "The red player wins!\n";
	}
}
