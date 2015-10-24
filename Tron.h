#include <string>
#include <iostream>
#include "Board.h"
#include "Player.h"
#include "ComputerPlayer.h"
using namespace std;

class Tron
{
	Board b;							 
	Player R;
	
	
	public: 
		void Play();
		void PlayAgainstComputer();
		void PlayAgainstPlayer();
		void PlayAgainstSmartComputer();
				
};
