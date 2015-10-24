class Player
{
	private:
		int size;
		char** array;
	
	public:
	int xCoordinate;
	int yCoordinate;
	char playerInput;
	bool isAlive;
	char playerColour;
	Player();
	

	
	void calculate_player_move(char**,char);
	void print(bool, bool);
	void receiveBoardSize(int);
	void receiveBoardArray(char**);
};
