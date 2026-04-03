#pragma once
#include <raylib.h>
#include "Entity.hpp"
#include "Scale.hpp"

class Player : protected Entity{
    private:
        struct Key{
            int up;
            int down;
            int left;
            int right;
        };
        Key key;
        float speed;

    public:
        Player(Texture2D * texture, Scale * scale, Key key, float speed);
        Key setKey();
        void update();
        void movement();
        void draw();
};