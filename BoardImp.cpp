// Board Implemention File

#include <iostream>
#include "Board.h"

Board::Board()
{

	do
	{ 
		cout << "Enter the size of the board (A single number between 4 and 20)\n";
		cin >> boardSize;
		
	} while (boardSize < 4 || boardSize > 20); 
	
	for (int i = 0; i < boardSize; i++)
	{
		vector <char> row;
		for (int j = 0; j < boardSize;j++)
		{
			row.push_back(' ');
		}		

		boardArray.push_back(row);
		
	}
	
	boardArray[1][1]= 'R';
	boardArray[boardSize - 2][boardSize - 2] = 'B';
	
}

void Board:: playersMoveChangingBoard(int xCoordinate, int yCoordinate, char playerColour)
{
	for (int i = 0; i < boardSize ; i++)
	{   
		for (int j = 0; j < boardSize; j++)
		{
			 if ( boardArray[i][j] == playerColour )
			 {
			 	boardArray[i][j] = 'O';
			 } 
		}
	}
	
	boardArray[xCoordinate][yCoordinate] = playerColour;
}

void Board::printVictory(bool redIsAlive, bool blueIsAlive)
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






void Board::print()
{
	for (int k = 0; k < boardSize * 3; k++)
	{
		cout << "- ";
	}
	cout << endl;
		
		
	// New row
	for (int i = 0; i < boardSize ; i++)
	{
		// New column
		for (int j = 0; j < boardSize; j++)
		{
			cout << "|  " << boardArray[i][j] << "  ";
		}
		cout << "|" << endl;
		
		for (int k = 0; k < boardSize * 3; k++)
		{
			cout << "- ";
		}
		cout << endl;
	
	}
	
	
	
	
}

