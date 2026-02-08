// Struckmire

// libs
#include <raylib.h>

int main(void)
{
    // init app
    // initialize window
    InitWindow(0, 0, "Template Project"); // create window (if 0 0, window is created of screen size)
    SetTargetFPS(60); // sets target fps

    // run app
    while(!WindowShouldClose())
    {
        // update

        // draw
        BeginDrawing(); // begin drawing

        // all drawing happens
        ClearBackground(SKYBLUE);
        
        EndDrawing(); // end drawing
    }

    // close app
    CloseWindow(); // close window

    return 0; // destructor of Player should be called automatically
}