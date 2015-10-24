#include "Tron.h"

void Tron::Play()
{
	int opponent = b.determineOpponent();
	
	if (  opponent == 1 )
	{
		PlayAgainstPlayer();

	}
	
	else if (opponent == 2)
	{
		PlayAgainstComputer();
	}
	
	else if (opponent == 3 )
	{
		PlayAgainstSmartComputer();
	}
}

void Tron::PlayAgainstComputer()
{
	ComputerPlayer B;
		
	B.receiveBoardSize ( b.getBoardSize() );
	B.receiveBoardArray( b.getBoardArray() );	
	
	R.receiveBoardSize ( b.getBoardSize() );
	R.receiveBoardArray( b.getBoardArray() );
	
	R.playerColour = 'R';
	R.xCoordinate = 1;
	R.yCoordinate = 1;
	
	
	B.xCoordinate = b.boardSize - 2;
	B.yCoordinate = b.boardSize - 2;
	
	
	b.print();
	
	while ( R.isAlive && B.isAlive)
	{
		
		
		// Ask for player input
		cout << "Input the move for the red player(U, D, L, R,)\n";
		cin >> R.playerInput;
		
		
		
			
			
		// Calculate player move 
		R.calculate_player_move( b.boardArray, R.playerInput);
		
		
		
		B.calculate_computer_move( );
	
				
		
		// Calculate immpact of player's move upon board state
		b.players_move_changing_board( R.xCoordinate, R.yCoordinate, R.playerColour, R.isAlive);
		b.players_move_changing_board( B.xCoordinate, B.yCoordinate, B.playerColour, B.isAlive);
		
		// Prints
		b.print();
		R.print(R.isAlive, B.isAlive);

	}
}

void Tron::PlayAgainstPlayer()
{
	Player B;
	
	R.playerColour = 'R';
	B.playerColour = 'B';                                                                          
	
		
			
	
	// Sets coordinates if the players		
	R.xCoordinate = 1;
	R.yCoordinate = 1;
	
	B.xCoordinate = b.boardSize - 2;
	B.yCoordinate = b.boardSize - 2;
		
	// Prints board in its intial state
	b.print();
	
	R.receiveBoardSize ( b.getBoardSize() );
	R.receiveBoardArray( b.getBoardArray() );
		
	B.receiveBoardSize ( b.getBoardSize() );
	B.receiveBoardArray( b.getBoardArray() );
		
	while ( R.isAlive && B.isAlive ) 
	{
	
		// Ask for player input
		cout << "Input the move for the red player(U, D, L, R,)\n";
		cin >> R.playerInput;
		
		cout << "Input the move for the blue player(U, D, L, R,)\n";
		cin >> B.playerInput;
		
		
		
		
		// Calculate player move 
		R.calculate_player_move( b.boardArray, R.playerInput);
		B.calculate_player_move( b.boardArray, B.playerInput );
		
		if (R.xCoordinate == B.xCoordinate && R.yCoordinate == B.yCoordinate)
		{
			R.isAlive = false;
			B.isAlive = false;
		}
		
		// Calculate player's move upon board state
		
		
		if (R.isAlive)
		b.players_move_changing_board( R.xCoordinate, R.yCoordinate, R.playerColour, R.isAlive);
		
			
		
	
		if (B.isAlive)
		b.players_move_changing_board( B.xCoordinate, B.yCoordinate, B.playerColour, B.isAlive);
	
		// Prints
		b.print();
		R.print(R.isAlive, B.isAlive);

	}
}

void Tron::PlayAgainstSmartComputer()
{
	Player B;
	
	R.playerColour = 'R';
	B.playerColour = 'B';                                                                          
	
		
			
	
	// Sets coordinates if the players		
	R.xCoordinate = 1;
	R.yCoordinate = 1;
	
	B.xCoordinate = b.boardSize - 2;
	B.yCoordinate = b.boardSize - 2;
		
	// Prints board in its intial state
	b.print();
	
	R.receiveBoardSize ( b.getBoardSize() );
	R.receiveBoardArray( b.getBoardArray() );
		
	B.receiveBoardSize ( b.getBoardSize() );
	B.receiveBoardArray( b.getBoardArray() );
		
	while ( R.isAlive && B.isAlive ) 
	{
	
		// Ask for player input
		cout << "Input the move for the red player(U, D, L, R,)\n";
		cin >> R.playerInput;
		
		if (R.playerInput == 'u' || R.playerInput == 'U' )
		{
			B.playerInput = 'D';
		}
		
		else if (R.playerInput == 'd' || R.playerInput == 'D' )
		{
			B.playerInput = 'U';
		}
		
		else if (R.playerInput == 'l' || R.playerInput == 'L' )
		{
			B.playerInput = 'R';
		}
		
		else if (R.playerInput == 'r' || R.playerInput == 'R' )
		{
			B.playerInput = 'L';
		}
		
		cout << endl << "THE COMPUTER HAS CHOSEN TO GO " << B.playerInput << endl;
		
		// Calculate player move 
		R.calculate_player_move( b.boardArray, R.playerInput);
	
		B.calculate_player_move( b.boardArray, B.playerInput );
		
		if (R.xCoordinate == B.xCoordinate && R.yCoordinate == B.yCoordinate)
		{
			R.isAlive = false;
			B.isAlive = false;
		}
		
		if (R.isAlive)
		{
			b.players_move_changing_board( R.xCoordinate, R.yCoordinate, R.playerColour, R.isAlive);
		}
		
		// Calculate player's move upon board state
		
		if (B.isAlive)
		{
			b.players_move_changing_board( B.xCoordinate, B.yCoordinate, B.playerColour, B.isAlive);
		}
		
		
	
		
	
	
	
	
		
			
		
	
	
		// Prints
		b.print();
		R.print(R.isAlive, B.isAlive);

	}
} 
