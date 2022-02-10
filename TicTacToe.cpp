#include <iostream>
#include <vector>
class TicTacToe {
    public:
        //NOTE: This is our constructor for a TicTacToe class. Same as CreateBoard()
        TicTacToe() {
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    board_[i][j] = " ";
                }
            }
        }

        void DisplayBoard()
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    std::cout << " | " << board_[i][j] << " | ";
                }
                std::cout << std::endl;
                std::cout << "--------------------" << std::endl;
            }
        }

        void PlaceMarker(std::string move[])
        {
            int xCoor = stoi(move[0]);
            int yCoor = stoi(move[1]);
            std::string symbol = move[2];

            board_[xCoor - 1][yCoor - 1] = symbol;
        }
    private:
        std::string board_[3][3];
};


int main()
{
    TicTacToe board;

    std::string test[] = {"1", "1", "X"};

    board.PlaceMarker(test);

    for(int i = 0; i < 9; i++)
    {
        board.DisplayBoard();

        
    }
    return 0;
}