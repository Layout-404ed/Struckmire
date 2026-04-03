#pragma once
#include <raylib.h>
class Scale{
    // attributes
    private: 
        Vector2 scale;
        struct TileNum{
            int x;
            int y;
        };

        const TileNum tileNum;
    
    // methods
    public:
        Scale(int tileNum_x, int tileNum_y);
        void updateScale();
        Vector2 getScale();
        TileNum getTileNum();
};