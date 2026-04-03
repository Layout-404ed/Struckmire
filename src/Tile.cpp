// tile implementation
#include "Tile.hpp"
Tile::Tile(Texture2D * texture, Scale * scale, float x, float y){
    this->texture = texture;
    this->scale = scale;
    rect = {
        .x = x,
        .y = y,
        .width = scale->getScale().x * 16,
        .height = scale->getScale().y * 16,
    };
}