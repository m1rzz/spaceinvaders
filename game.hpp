#pragma once
#include "spaceship.hpp"

class Game
{

    public:

        Game();
        ~Game();
        void Draw();
        void Update();
        void HandleInput();

    private:
        void DeleteLasers();
        Spaceship spaceship;

};