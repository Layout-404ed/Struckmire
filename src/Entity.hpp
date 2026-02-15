// entity class
#pragma once
#include "raylib.h"
class Entity{
    public:
        Vector2 pos;
        Rectangle rect;
        Texture2D texture;
        float speed;
        float rotation;
        int health;
        int defense;
        Color color;
};