#include "Player.hpp"

Player::Player() : currentDirection_(Direction::Right)
{
    player_.push_back(COORD(WIDTH / 4, HEIGHT / 2));
}

std::deque<COORD> Player::getPlayer() const noexcept
{
    return player_;
}

void Player::setDirection(Direction newDirection) noexcept
{
    currentDirection_ = newDirection;
}

void Player::changePosition() noexcept
{
    switch (static_cast<int>(currentDirection_))
    {
    case 0:
        moveUp();
        break;
    case 1:
        moveDown();
        break;
    case 2:
        moveLeft();
        break;
    case 3:
        moveRight();
        break;
    }
}

void Player::moveUp() noexcept
{
    player_.at(0).coordY_ -= 1;
}

void Player::moveDown() noexcept
{
    player_.at(0).coordY_ += 1;
}

void Player::moveLeft() noexcept
{
    player_.at(0).coordX_ -= 1;
}

void Player::moveRight() noexcept
{
    player_.at(0).coordX_ += 1;
}