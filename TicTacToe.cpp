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

        void DisplayBoard() {
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    std::cout<< board_[k][l];
                }
                std::cout<<std::endl;
            }
        }
    private:
        std::string board_[3][3];
};