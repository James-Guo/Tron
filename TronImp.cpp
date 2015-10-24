// Tron Imp file

#include "Tron.h"
#include "Player.h"
#include "ComputerPlayer.h"

Tron::Tron()
{
	do
	{
		cout << "Enter 1 if you would like to play against another player" << endl;
		cout << "Enter 2 if you would like to play against a computer" << endl;
//		cout << "Enter 3 if you would like to play against a smart computer" << endl;
		cin >> opponent;
	}
	while ( opponent != 1 && opponent != 2 /* && opponent != 3*/ );

}


void Tron::play()
{
		
	if (  opponent == 1 )
	{
		playAgainstPlayer();

	}
	
	else if (opponent == 2)
	{
		playAgainstComputer();
	}
	
//	else if (opponent == 3 )
//	{
//		PlayAgainstSmartComputer();
//	}
}

void Tron::playAgainstPlayer()
{
	
	Player R('R', "Red", 1, 1);
	Player B('B', "Blue", b.getBoardArray().size() - 2,  b.getBoardArray().size() - 2);
	
	b.print();
	
	while(R.getIsAlive() == true && B.getIsAlive() == true)
	{
		R.setPlayerInput(b.getBoardArray() );
		B.setPlayerInput(b.getBoardArray() );
		
		if (R.getXCoordinate() == B.getXCoordinate() && R.getYCoordinate() == B.getYCoordinate() )
		{
			R.setIsAliveToFalse();
			B.setIsAliveToFalse();
		}
		
			
		if (R.getIsAlive() == true )
			b.playersMoveChangingBoard( R.getXCoordinate(), R.getYCoordinate(), R.getPlayerLetter() );
		
		if (B.getIsAlive() == true )
			b.playersMoveChangingBoard( B.getXCoordinate(), B.getYCoordinate(), B.getPlayerLetter() );
	
		// Prints
		b.print();
		b.printVictory(R.getIsAlive(), B.getIsAlive() );
		
	}
	
	
	
}


void Tron::playAgainstComputer()
{
	Player R('R', "Red", 1, 1);
	ComputerPlayer B('B', "Blue", b.getBoardArray().size() - 2,  b.getBoardArray().size() - 2);
		
		
	b.print();
	
	while(R.getIsAlive() == true && B.getIsAlive() == true)
	{
		R.setPlayerInput(b.getBoardArray() );
	
		B.calculateComputerMove(b.getBoardArray() );
		
		if (R.getXCoordinate() == B.getXCoordinate() && R.getYCoordinate() == B.getYCoordinate() )
		{
			R.setIsAliveToFalse();
			B.setIsAliveToFalse();
		}
			
		if (R.getIsAlive() == true )
			b.playersMoveChangingBoard( R.getXCoordinate(), R.getYCoordinate(), R.getPlayerLetter() );
		
		if (B.getIsAlive() == true )
			b.playersMoveChangingBoard( B.getXCoordinate(), B.getYCoordinate(), B.getPlayerLetter() );
	
		// Prints
		b.print();
		b.printVictory(R.getIsAlive(), B.getIsAlive() );
		
	}
	
	
}
