#include "Board.hpp"

void Board::draw() const noexcept
{
    system("clear");
    std::cout << "+";
    for (int i = 0; i < WIDTH; i++)
    {
        std::cout << "=";
    };
    std::cout << "+" << std::endl;
    //////////////////////////////////////////////////////////
    for (int i=0; i<HEIGHT; i++)
    {
        std::cout << "|";
        for (int j=0; j<WIDTH; j++)
        {
            for(const auto& el : refToPlayer_.getPlayer())
            {
                if(el.coordX_ == j && el.coordY_ == i)
                {
                    std::cout << "@";
                    break;
                }
                else std::cout << " ";
            }
        }
        std::cout << "|" << std::endl;
    }
    //////////////////////////////////////////////////////////
    std::cout << "+";
    for (int i = 0; i < WIDTH; i++)
    {
        std::cout << "=";
    };
    std::cout << "+" << std::endl;
}