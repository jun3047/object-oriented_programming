#include <iostream>
#include <ctime>
#include <array>
using namespace std;

const int boardLen{ 3 };
int bombProb{ 20 };
enum class Status { CONTINUE, WON, LOST };

Status gameStep(array <array <int, boardLen>, boardLen>&, const array<int, 2>&);
void printBoard(const array <array <int, boardLen>, boardLen>&);
void printAllBomb(const array <array <int, boardLen>, boardLen>&);

int main()
{
    // TO-DO
    // You must implement main function!
    // You can use below template codes, but you have to design the overall algorithm and implement the C++ code yourself.
    array <array <int, boardLen>, boardLen> board;

    srand(static_cast<unsigned int>(time(0)));

    for (int i{ 0 }; i < boardLen; i++) {
        for (int j{ 0 }; j < boardLen; j++) {
            board[i][j] = -1;
        }
    }
    printBoard(board);
}

Status gameStep(array <array <int, boardLen>, boardLen>& board, const array<int, 2>& move) {
    // TO-DO
    // You must implement gameStep function!
    return Status::CONTINUE;
}

void printAllBomb(const array <array <int, boardLen>, boardLen>& board) {
    // TO-DO
    // You must implement printAllBomb function!
}

void printBoard(const array <array <int, boardLen>, boardLen>& board) {
    // Caution!
    // Do not edit the printBoard function!
    cout << "    ";
    for (int i{ 0 }; i < boardLen; i++) {
        cout << i << " ";
    }
    cout << "\n   ";
    for (int i{ 0 }; i < boardLen; i++) {
        cout << "__";
    }
    cout << endl;
    for (int i{ 0 }; i < boardLen; i++) {
        cout << i << " | ";
        for (int j{ 0 }; j < boardLen; j++) {
            if (board[i][j] == -2) {
                cout << ". ";
            }
            else if (board[i][j] == -1) {
                cout << ". ";
            }
            else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}
