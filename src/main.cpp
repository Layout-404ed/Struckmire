// Struckmire main
// libs
#include <raylib.h>

// main
int main(){
    // init
    InitWindow(0.0f, 0.0f, "Struckmire");
    SetTargetFPS(60);

    // window
    while(!WindowShouldClose())
    {
        // update

        // draw
        ClearBackground(SKYBLUE);
        DrawText("Welcome to Struckmire", 10, 10, 10, RAYWHITE);

        EndDrawing();
    }

    // close
    CloseWindow();

    return 0;
}