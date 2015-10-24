// Player header file

#include <string>
#include <vector>
#include <iostream>
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	protected:
		int xCoordinate;
		int yCoordinate;
		char playerInput;
		bool isAlive;
		char playerLetter;
		string playerColour;
	
	public:
		Player(char, string, int, int);
		
		void setCoordinates(int x, int y);
		void setPlayerInput(vector < vector <char> > );
		void setIsAliveToFalse(){isAlive = false;}
			
		int getXCoordinate(){return xCoordinate;}
		int getYCoordinate(){return yCoordinate;}
		bool getIsAlive(){return isAlive;}
		char getPlayerLetter(){return playerLetter;}
		
};

#endif
