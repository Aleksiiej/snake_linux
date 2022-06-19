#pragma once
#include <deque>
#include "GlobalValues.hpp"
#include "COORD.hpp"
#include "Food.hpp"

class Player
{
public:
    Player();

    void changePosition() noexcept;
    bool checkIfLost() const noexcept;
    bool isFoodEaten() const noexcept;

    const std::deque<COORD> &getPlayerRef() noexcept;
    const Direction &getDirectionRef() const noexcept;
    size_t getPlayerSize() const noexcept;

    void setDirection(const Direction &newDirection) noexcept;
    void setPointerToFood(const std::shared_ptr<Food> &) noexcept;

private:
    Direction currentDirection_;
    COORD currentHead_;
    std::deque<COORD> player_;
    std::shared_ptr<Food> ptrToFood_;
};