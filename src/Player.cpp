#include "Player.hpp"
#include "raylib.h"

void Player::update(){
    movement();
}

Player::Player(Texture2D * texture, Scale * scale, Key key, float speed){
    this->texture = texture;
    this->scale = scale;
    rect = {
        .x = 0.0f,
        .y = 0.0f,
        .width = 16.0f * scale->getScale().x,
        .height = 32.0f * scale->getScale().y
    };
    this->key = key;
    this->speed = speed;
};

void Player::movement(){
    if(IsKeyDown(key.up)){
        vector2D.y -= speed * GetFrameTime() * scale->getScale().y;
    }
    if(IsKeyDown(key.down)){
        vector2D.y += speed * GetFrameTime() * scale->getScale().y;
    }
    if(IsKeyDown(key.left)){
        vector2D.x -= speed * GetFrameTime() * scale->getScale().x;
    }
    if(IsKeyDown(key.right)){
        vector2D.x += speed * GetFrameTime() * scale->getScale().x;
    }
}

void Player::draw(){
    DrawTextureRec(*texture, rect, vector2D, RAYWHITE);
}