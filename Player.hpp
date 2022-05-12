#pragma once
#include <iostream>
#include <deque>
#include "GlobalValues.hpp"
#include "COORD.hpp"
#include "Board.hpp"

class Player
{
public:
    Player();
    std::deque<COORD> getPlayer() const noexcept;
    void setDirection(Direction newDirection) noexcept;
    void changePosition() noexcept;
    void moveUp() noexcept;
    void moveDown() noexcept;
    void moveLeft() noexcept;
    void moveRight() noexcept;

private:
    std::deque<COORD> player_;
    Direction currentDirection_;
};