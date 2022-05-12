#include <iostream>
#include <cstdio>
#include "Board.hpp"
#include "Player.hpp"

int main()
{
    std::cout << "PRIMITIVE SNAKE" << std::endl;
    std::cout << "Press any button to start..." << std::endl;
    getchar();

    bool isGameLost = false;
    char currentButton;
    Player player;
    Board board(player);

    while (!isGameLost)
    {
        currentButton = getchar();
        switch (currentButton)
        {
        case 'w':
            player.setDirection(Direction::Up);
            break;
        case 's':
            player.setDirection(Direction::Down);
            break;
        case 'a':
            player.setDirection(Direction::Left);
            break;
        case 'd':
            player.setDirection(Direction::Right);
            break;
        default:
            break;
        }
        if (currentButton == 'q')
        {
            break;
        }
        player.changePosition();
        board.draw();
    }
}