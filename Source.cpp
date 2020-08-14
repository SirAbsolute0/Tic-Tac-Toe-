#include <iostream>
using namespace std;

//Input validation prototype
void checkInput(int&, int&);

//Displaying game board function prototype
void displayBoard();

//Player X, O function prototype
void playerX(int, int);
void playerO(int, int);

// Check for replicating moves
bool checkReplication(int, int);

//Check for win condition
void winCondition();

// Setting up the 2 dimensional array for the game board
char gameBoard[3][3] = { '.','.', '.', '.', '.', '.', '.', '.', '.', };

int main()
{
	//Place holder variables
	int row = 0, column = 0;

	//Display blank board
	displayBoard();

	//First turn
	playerX(row, column);
	displayBoard();
	playerO(row, column);
	displayBoard();


	//Second turn
	playerX(row, column);
	displayBoard();
	playerO(row, column);
	displayBoard();


	//Third turn
	playerX(row, column);
	displayBoard();
	winCondition();
	playerO(row, column);
	displayBoard();
	winCondition();

	//Fourth turn
	playerX(row, column);
	displayBoard();
	winCondition();
	playerO(row, column);
	displayBoard();
	winCondition();

	//Fifth turn
	playerX(row, column);
	winCondition();
}



// Input validation function
void checkInput(int& row, int& column)
{
	while (row <= 0)
	{
		cout << "Enter player X, row and column:";
		cin >> row;
	}
	while (column <= 0)
	{
		cout << "Enter player O, row and column:";
		cin >> column;
	}
}

//Display board function
void displayBoard()
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			cout << gameBoard[row][column];
		}
		cout << endl;
	}
}

//Player X funnction
void playerX(int row, int column)
{
	cout << "Enter player X, row and column:";
	cin >> row >> column;
	checkInput(row, column);
	while (checkReplication(row, column) == false)
	{
		cout << "Enter player X, row and column:";
		cin >> row >> column;
		checkInput(row, column);
		checkReplication(row, column);
	}
	gameBoard[row - 1][column - 1] = 'X';
}

//Player O function
void playerO(int row, int column)
{
	cout << "Enter player O, row and column:";
	cin >> row >> column;
	checkInput(row, column);
	while (checkReplication(row, column) == false)
	{
		cout << "Enter player O, row and column:";
		cin >> row >> column;
		checkInput(row, column);
	}
	gameBoard[row - 1][column - 1] = 'O';
}

// Check replication function
bool checkReplication(int row, int column)
{
	if (gameBoard[row - 1][column - 1] == 'X')
	{
		return false;
	}
	else if (gameBoard[row - 1][column - 1] == 'O')
	{
		return false;
	}
	else
	{
		return true;
	}
}

// Check win condition function
void winCondition()
{
	// Check Player X win condition
	if (gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else if (gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X')
	{
		cout << "Player X wins" << endl;
		system("pause");
	}
	else
	{
		cout << "It is a tie" << endl;
		system("pause");
	}

	// Check Player O win condition
	if (gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[0][1] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][1] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O')
	{
		cout << "PlayerO wins";
	}
	else if (gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O')
	{
		cout << "PlayerO wins";
	}
}