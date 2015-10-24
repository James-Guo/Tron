// Computer player header

#include "Player.h"

#ifndef COMPUTERPLAYER_H
#define COMPUTERPLAYER_H

class ComputerPlayer: public Player
{
	public:
		ComputerPlayer(char, string, int, int);
		void calculateComputerMove(vector < vector <char> > );
		
		
};

#endif
