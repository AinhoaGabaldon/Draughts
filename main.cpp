
#include <iostream>
#include <vector>

std::vector<char> board {
        '.', 'X', '.', 'X', '.', 'X', '.', 'X',
        'X', '.', 'X', '.', 'X', '.', 'X', '.',
        '.', 'X', '.', 'X', '.', 'X', '.', 'X',
        '.', '.', '.', '.', '.', '.', '.', '.',
        '.', '.', '.', '.', '.', '.', '.', '.',
        'O', '.', 'O', '.', 'O', '.', 'O', '.',
        '.', 'O', '.', 'O', '.', 'O', '.', 'O',
        'O', '.', 'O', '.', 'O', '.', 'O', '.',
};

char currentPlayer;
char player1 = 'x';
char player2 = 'o';

struct Coords {
    int x;
    int y;
};

Coords indexToCoords(int index) {
    return { index % 8, index / 8 };
}
int coordsToIndex(Coords coords) {
    return coords.x + coords.y * 8;
}
void printBoard() {
    for (int i = 0; i < board.size(); ++i) {
        if (i % 8 == 0)
            std::cout << '\n';

        std::cout << ' ' << board.at(i);
    }

    std::cout << "\n\n";
}
void movePawn(int form, int to) {
    board.at(to) = board.at(form);
    board.at(form) = '.';

bool hasAnyPawn(char player) {
	for (auto cell : board) {
		if (cell == player)
			return true;
	}

	return false;
}
void checkWinCodition() {
	if (!hasAnyPawn('o')) {
		std::cout << "Player 'x' wins" << std::cout;
	}
	if (hasAnyPawn('x')) {
		std::cout << "Player 'o' wins" << std::cout;
	}
}

int main()
{
	printBoard();
	currentPlayer = player2;
	movePawn(40, 33);
	checkWinCodition();

	printBoard();
	currentPlayer = player1;
	movePawn(40, 33);
	checkWinCodition();

	printBoard();
	currentPlayer = player1;
	checkWinCodition();
}


