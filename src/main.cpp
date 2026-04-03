// Struckmire main
// libs
#include <raylib.h>
#include "Scale.hpp"
#include "Tile.hpp"
#include "Entity.hpp"
#include "Player.hpp"
// #include <iostream>

// main
int main(){
    // init
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800.0f, 800.0f, "Struckmire");
    SetTargetFPS(60);

    Scale scale(10, 10);
    Texture2D player_texture = LoadTexture("../assets/textures/tiles/grass.png");
    Player player(&player_texture, &scale, {KEY_UP, KEY_DOWN, KEY_LEFT, KEY_RIGHT}, 16.0f);

    float collect = 0.0f;
    float tickrate = 1.0f/30.0f;

    // window
    while(!WindowShouldClose())
    {
        // update
        scale.updateScale();
        player.update();
        
        collect += GetFrameTime();
        while(collect >= tickrate)
        {
            // tick based updates

            collect -= tickrate;
        }


        // draw
        ClearBackground(SKYBLUE);
        player.draw();
        // DrawText(("Scale: " + std::to_string(scale.x * scale.y)).c_str(), 10, 10, 20, RED);
        // DrawText("Welcome to Struckmire", GetScreenWidth()/2, GetScreenHeight()/2, 10 * scale.getScale().y, RAYWHITE);
        // std::cout << "DPI: " << GetWindowScaleDPI().x << ' ' << GetWindowScaleDPI().y << '\n';

        EndDrawing();
    }

    // close
    CloseWindow();

    return 0;
}