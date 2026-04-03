// tile class
#pragma once
#include <raylib.h>
#include "Scale.hpp"
class Tile{
    // attributes
    private:
        Texture2D * texture;
        Rectangle rect;
        Scale * scale;

    // methods
    public:
        Tile(Texture2D * texture, Scale * scale, float x, float y);
};