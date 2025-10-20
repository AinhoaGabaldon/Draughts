
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

struct Coords {
    int x;
    int y;
};

Coords indexToCoords(int index) {
    return { index % 8, index / 8 };
}
int coordsToIndex(Coords coords) {

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
}
int main()
{
    printBoard();
    movePawn(40, 33);

    printBoard();
    movePawn(40, 33);
    
    printBoard();

    }
    
 
