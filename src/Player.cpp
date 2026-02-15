// player class implementation
#include "Player.hpp"
#include "raylib.h"

Player::Player(Texture2D texture, Vector2 pos, float speed, float rotation, Color color){
    this->texture = texture;
    this->speed = speed;
    this->pos = pos;
    this->color = color;

    key = {
        KEY_W,
        KEY_S,
        KEY_A,
        KEY_D,
        KEY_LEFT_SHIFT
    };
    
    rect = {
        pos.x,
        pos.y,
        16, 
        16
    };
}

Player::~Player() = default;

void Player:: move(){
    // if(IsKeyDown(key.sprint)){
    //     speed *= 2;
    //     if(IsKeyDown(key.up))
    //         pos.y -= speed * GetFrameTime();
    //     if(IsKeyDown(key.down))
    //         pos.y += speed * GetFrameTime();
    //     if(IsKeyDown(key.left))
    //         pos.x -= speed * GetFrameTime();
    //     if(IsKeyDown(key.right))
    //         pos.x += speed * GetFrameTime();
    //     speed /= 2;
    // }else{
        if(IsKeyDown(key.up))
            pos.y += speed * GetFrameTime();
        if(IsKeyDown(key.down))
            pos.y -= speed * GetFrameTime();
        if(IsKeyDown(key.left))
            pos.x += speed * GetFrameTime();
        if(IsKeyDown(key.right))
            pos.x -= speed * GetFrameTime();
    // }
}