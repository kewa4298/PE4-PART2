#include <iostream>
#include <vector>
class TicTacToe {
    public:
        //NOTE: This is our constructor for a TicTacToe class.
        TicTacToe() {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    board_[i][j] = " ";
                }
            }
        }
    private:
        std::string board_[3][3];
};