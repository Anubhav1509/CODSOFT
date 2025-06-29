#include <bits/stdc++.h>
using namespace std;

char mat[3][3];

// Show the game board
void show() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << mat[i][j] << " ";
            if (j < 2) cout << "|";
        }
        cout << endl;
        if (i < 2) cout << "---+---+---\n";
    }
}

// Check if player 'ch' is the winner
bool isWinner(char ch) {
    for (int i = 0; i < 3; i++) {
        if ((mat[i][0] == ch && mat[i][1] == ch && mat[i][2] == ch) ||
            (mat[0][i] == ch && mat[1][i] == ch && mat[2][i] == ch)) return true;
    }
    if ((mat[0][0] == ch && mat[1][1] == ch && mat[2][2] == ch) ||
        (mat[0][2] == ch && mat[1][1] == ch && mat[2][0] == ch)) return true;
    return false;
}

// Check if it's a draw
bool isDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] == ' ') return false;
        }
    }
    return true;
}

// Main game logic
int main() {
    char playAgain;
    do {
        // Initialize empty board
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                mat[i][j] = ' ';

        char currentPlayer = 'X';
        bool gameWon = false;

        while (true) {
            show();
            cout <<"Player "<< currentPlayer << ", enter your move (row col): ";
            int row, col;
            cin>>row>>col;
            row--; col--;
            if (row < 0 || row >= 3 || col < 0 || col >= 3 || mat[row][col] != ' ') {
                cout << "Invalid move. Try again!\n";
                continue;
            }
            mat[row][col] = currentPlayer;
            if (isWinner(currentPlayer)) {
                show();
                cout << "Player " << currentPlayer << " wins!\n";
                gameWon = true;
                break;
            }
            if (isDraw()) {
                show();
                cout << "It's a draw!\n";
                break;
            }
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
        cout << "Play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";
    return 0;
}
