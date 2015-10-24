class ComputerPlayer
{
	private:
		int size;
		char** array;
		
	public:
	int xCoordinate;
	int yCoordinate;
	bool isAlive;
	char playerColour;
	
	
	ComputerPlayer();
	
	void calculate_computer_move();
	void print(bool, bool);
	void receiveBoardSize(int);
	void receiveBoardArray(char**);
};
