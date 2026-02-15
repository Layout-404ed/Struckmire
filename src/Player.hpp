#pragma once
#include "Entity.hpp"
#include "Key.hpp"
#include "raylib.h"
class Player : public Entity{
    public:
        Key key;
        
        Player(Texture2D texture, Vector2 pos, float speed, float rotation, Color color);
        ~Player();

        void move();
};