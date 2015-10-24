#include <string>
#include <iostream>

#include "Board.h"
using namespace std;

// Construtors									
Board::Board()
{
	boardSize = 0;
	
	// Only proceeds if the boardsize is between 4 and 20
	do
	{ 
		cout << "Enter the size of the board (A single number between 4 and 20)\n";
		cin >> boardSize;
		
	} while (boardSize < 4 || boardSize > 20); 
	 
	// Initialises an array 
	boardArray = new CharArrayPtr[boardSize]; 	
	
	// Creates a pointer of pointers
	for (int i = 0; i < boardSize; i++)
	{
		boardArray[i] = new char[boardSize];
	}
    
    
    // Fills board
	for (int i = 0; i < boardSize; i ++)
	{
		for (int j = 0; j < boardSize; j++)
		{
			boardArray[i][j] = ' ';
		}	
	}   
	 
	
	// Sets initial location of characters
	boardArray[1][1]= 'R';
	boardArray[boardSize - 2][boardSize - 2] = 'B';
}





void Board::players_move_changing_board( int xCoordinate, int yCoordinate, char playerColour, bool isAlive )
{
	// Swap the R to the O
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

int Board::determineOpponent()
{
	int determineOpponent;
  	do
	{
		cout << "Enter 1 if you would like to play against another player" << endl;
		cout << "Enter 2 if you would like to play against a computer" << endl;
		cout << "Enter 3 if you would like to play against a smart computer" << endl;
		cin >> determineOpponent;
	}
	while ( determineOpponent != 1 && determineOpponent != 2 && determineOpponent != 3);
	
	return determineOpponent;

}

int Board::getBoardSize()
{
	return boardSize;
}


char** Board::getBoardArray()
{
	return boardArray;
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

Board:: ~Board()
{
	for (int i = 0; i < boardSize; i++)
	{
		delete[]boardArray[i];
	}
        
    delete[] boardArray;
   
}
