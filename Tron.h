// Tron header file

#include <string>
#include <iostream>
#include "Board.h"
//#include "Player.h"
//#include "ComputerPlayer.h"
using namespace std;

class Tron
{
	Board b;
	int opponent;						 
	
	
	
	public: 
		void play();
		void playAgainstComputer();
		void playAgainstPlayer();
//		void playAgainstSmartComputer();
		Tron();
		

				
};
