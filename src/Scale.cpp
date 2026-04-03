// scale class implementation
#include "Scale.hpp"
#include <raylib.h>

Scale::Scale(int tileNum_x, int tileNum_y): tileNum({tileNum_x, tileNum_y}){
    scale = {
        .x = GetScreenWidth() / (16.0f * tileNum_x),
        .y = GetScreenHeight() / (16.0f * tileNum_y)
    };
}

void Scale::updateScale(){
    scale = {
        .x = GetScreenWidth() / (16.0f * tileNum.x),
        .y = GetScreenHeight() / (16.0f * tileNum.y)
    };
}

Vector2 Scale::getScale(){
    return scale;
}

Scale::TileNum Scale::getTileNum(){
    return tileNum;
}