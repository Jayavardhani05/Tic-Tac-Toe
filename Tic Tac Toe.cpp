#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class TicTacToe {
private:
    char board[3][3]; 
    char currentMarker;

public:
    TicTacToe() {
        resetBoard();
    }

    void resetBoard() {
        currentMarker = 'X'; 
        char cellNumber = '1';
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = cellNumber++;
            }
        }
    }

    void renderBoard() const {
        cout << "\033[H\033[J"; 
        
        cout << "\n=========================================\n";
        cout << "         TIC-TAC-TOE GAME ENGINE         \n";
        cout << "=========================================\n\n";

        cout << "             " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " \n";
        cout << "            ---+---+---\n";
        cout << "             " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " \n";
        cout << "            ---+---+---\n";
        cout << "             " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " \n\n";
    }

    char getCurrentPlayer() const {
        return currentMarker;
    }

    bool processMove(int slotInput) {
        if (slotInput < 1 || slotInput > 9) return false;

        int row = (slotInput - 1) / 3;
        int col = (slotInput - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            return false;
        }

        board[row][col] = currentMarker;
        return true;
    }

    void alternatePlayerTurn() {
        currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    }

    bool checkWinCondition() const {
            ]        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        }
        for (int i = 0; i < 3; i++) {
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;

        return false;
    }

    bool checkTieCondition() const {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') {
                    return false; 
                }
            }
        }
        return true;
    }
};

int main() {
    TicTacToe game;
    char replayChoice;

    do {
        game.resetBoard();
        bool matchActive = true;

        while (matchActive) {
            game.renderBoard();
            int slotSelection;

            while (true) {
                cout << "Player [" << game.getCurrentPlayer() << "], select an open slot (1-9): ";
                if (cin >> slotSelection) {
                    if (game.processMove(slotSelection)) {
                        break; 
                    }
                }
                
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                game.renderBoard();
                cout << "[ALERT]: That cell location is invalid or already occupied!\n";
            }

            if (game.checkWinCondition()) {
                game.renderBoard();
                cout << "*****************************************\n";
                cout << "   CONGRATULATIONS! PLAYER [" << game.getCurrentPlayer() << "] WINS!\n";
                cout << "*****************************************\n";
                matchActive = false;
            } 
            else if (game.checkTieCondition()) {
                game.renderBoard();
                cout << "=========================================\n";
                cout << "   STALEMATE MATCH: THE GAME IS A TIE!   \n";
                cout << "=========================================\n";
                matchActive = false;
            } 
            else {
                game.alternatePlayerTurn();
            }
        }

        cout << "\nWould you like to initiate a rematch? (Y/N): ";
        cin >> replayChoice;

    } while (replayChoice == 'y' || replayChoice == 'Y');

    cout << "\nSystem environment closed smoothly down. Thank you for playing!\n";
    return 0;
}