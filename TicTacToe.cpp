#include <iostream>
#include <vector>
#include<tuple>
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

        void DisplayBoard()
        {
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    std::cout << " | " << board_[i][j] << " | ";
                }
                std::cout << std::endl;
                std::cout << "------------------" << std::endl;
            }
        }

        std::vector<std::string> getPlayerChoice() {
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