#pragma once
#include <iostream>
#include <array>
#include <memory>
#include "GlobalValues.hpp"
#include "Player.hpp"
#include "COORD.hpp"

class Player;

class Board
{
public:
    Board(Player &refToPlayer) : refToPlayer_(refToPlayer), board_{}
    {
    }

    void draw() const noexcept;

private:
    std::array<std::array<int, WIDTH>, HEIGHT> board_;
    Player& refToPlayer_;
};