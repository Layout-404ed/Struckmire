#pragma once
#include <raylib.h>
#include "Scale.hpp"
class Entity{
    // attributes
    protected: 
        Texture2D * texture;
        Rectangle rect;
        Scale * scale;
        Vector2 vector2D;
};