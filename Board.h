using namespace std;

typedef char* CharArrayPtr;

class Board 
{
	// Variables
	public:
	CharArrayPtr *boardArray;
	int boardSize;
	
	
	Board();
	~Board();
	
		
	// Functions
	void print();
	void fill_board( );
	void players_move_changing_board( int , int, char, bool  );
	int getBoardSize();
	char** getBoardArray();
	int determineOpponent();
	
};
