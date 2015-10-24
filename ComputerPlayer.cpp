#include <string>
#include <iostream>
#include <stdlib.h> 
#include <ctime>

#include "ComputerPlayer.h"
using namespace std;

ComputerPlayer::ComputerPlayer()
{
	isAlive = true;
	playerColour = 'B';
	
	
}

void ComputerPlayer::receiveBoardSize(int boardSize)
{
	size = boardSize;
	
}

void ComputerPlayer::receiveBoardArray(char** boardArray)
{
	array = boardArray;
	
}


void ComputerPlayer::calculate_computer_move()
{
	bool movement[4];
	bool canGoUp = true;
	bool canGoDown = true;
	bool canGoLeft = true;
	bool canGoRight = true;
	
	
	
	for (int i = 0; i < 4; i++)
	{
		movement[i] = false;
	}


	if (xCoordinate - 1 < 0 || xCoordinate - 1 > size - 1 )
	{
		canGoUp = false;
	}
	
	if (xCoordinate + 1 < 0 || xCoordinate + 1 > size - 1 )
	{
		canGoDown = false;
	}
	
	if (yCoordinate - 1 < 0 || yCoordinate - 1 > size - 1 )
	{
		canGoLeft = false;
	}
	
	if (yCoordinate + 1 < 0 || yCoordinate + 1 > size - 1 )
	{
		canGoRight = false;
	}

	
	if (canGoUp)
	{	
		if ( array[xCoordinate - 1][yCoordinate] == ' ' )
		{
			movement[0] = true;
			
		}
	}
	
	
	if (canGoDown )
	{
		if (  array[xCoordinate + 1][yCoordinate] == ' ' )
		{
			movement[1] = true;
		
		}
	}

	if (canGoLeft)
	{	
		if ( array[xCoordinate ][yCoordinate - 1] == ' ' )
		{
			movement[2] = true;
		
		}
	}

	if (canGoRight)
	{	
		if ( array[xCoordinate ][yCoordinate + 1] == ' ' )
		{
			movement[3] = true;
		
		}
	}
	
		
	if (movement[0] == false && movement[1] == false && movement[2] == false && movement[3] == false)
	{
		isAlive = false;
	}
	
	
	
	else 
	{
		bool directionHasBeenChoosen = false;
		srand( time( 0 ) );
		do 
		{
			
			 
			int randomNumberGenerated = rand() % 4;
			
			// Go up
			if (randomNumberGenerated == 0 && movement[0] == true )
			{
				directionHasBeenChoosen = true;
				xCoordinate--;  
				cout << "THE COMPUTER HAS CHOSEN TO GO UP" << endl;
			}
			
			// Go down
			else if (randomNumberGenerated == 1 && movement[1] == true)
			{
				directionHasBeenChoosen = true;
				xCoordinate++;
				cout << "THE COMPUTER HAS CHOSEN TO GO DOWN" << endl;
			}
			
			// Go left
			else if (randomNumberGenerated == 2 && movement[2] == true)
			{
				directionHasBeenChoosen = true;
				yCoordinate--;
				cout << "THE COMPUTER HAS CHOSEN TO GO LEFT" << endl;
			}
			
			// Go right
			else if (randomNumberGenerated == 3 && movement[3] == true)
			{
				directionHasBeenChoosen = true;
				yCoordinate++;
				cout << "THE COMPUTER HAS CHOSEN TO GO RIGHT" << endl;
			}
		}
		while ( directionHasBeenChoosen == false);
		
	
				
	}
	


	
}
