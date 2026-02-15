// Struckmire

// libs
#include "Player.hpp"
#include <raylib.h>

int main(void)
{
    // init app
    // initialize window
    InitWindow(0, 0, "Template Project"); // create window (if 0 0, window is created of screen size)
    SetTargetFPS(60); // sets target fps

    // load textures

    // create player
    Player player = Player(LoadTexture(""), (Vector2){0, 0}, 256, 90, WHITE);

    // run app
    while(!WindowShouldClose())
    {
        // update
        player.move();

        // draw
        BeginDrawing(); // begin drawing
        DrawRectanglePro(player.rect, player.pos, player.rotation, player.color);

        // all drawing happens
        ClearBackground(SKYBLUE);
        
        EndDrawing(); // end drawing
    }

    // unload

    // close app
    CloseWindow(); // close window

    return 0; // destructor of Player should be called automatically
}