#include <iostream>
#include <vector>
#include<tuple>
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

        void PlaceMarker(std::vector<std::string> move)
        {
            int xCoor = stoi(move[0]);
            int yCoor = stoi(move[1]);
            std::string symbol = move[2];

            board_[xCoor - 1][yCoor - 1] = symbol;
        }

        std::vector<std::string> GetPlayerChoice()
        {
            std::vector<std::string> retVec;
            std::string rowChoice = "";
            std::string colChoice = "";
            std::string symbol = "";
            
            std::cout<<"Please enter your row choice:";
            std::cin >> rowChoice;
            retVec.push_back(rowChoice);

            std::cout<<"Please enter your column choice:";
            std::cin >> colChoice;
            retVec.push_back(colChoice);

            std::cout<<"Please enter if you are an X or an O:";
            std::cin >> symbol;
            retVec.push_back(symbol);
            return retVec;
        }
    private:
        std::string board_[3][3];
};


int main()
{
    TicTacToe board;

    for(int i = 0; i < 9; i++)
    {
        std::vector<std::string> move = board.GetPlayerChoice(); 
        board.PlaceMarker(move);
        board.DisplayBoard();

    }
    return 0;
}