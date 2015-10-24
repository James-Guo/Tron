// Board header file

#include <vector>

using namespace std;


class Board 
{
	// Variables
	private:
		vector <vector <char> > boardArray;
		int boardSize;
	
	public:
		Board();
			
		// Functions
		void print();
		void printVictory(bool, bool);
		void playersMoveChangingBoard( int , int, char);
		
		vector <vector<char> > getBoardArray(){return boardArray;}
		
		int getBoardSize(){return boardSize;}
		
		int determineOpponent();
	
};
