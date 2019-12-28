#ifndef BOMBEER_MAN_BOMB_H
#define BOMBEER_MAN_BOMB_H

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include "Map.h"


class Bomb {
    friend class Player;
    public:
        Bomb();
        Location bomb_right();
        Location bomb_left();
        Location bomb_up();
        Location bomb_down();
        void changemap(Location);

    private:
        Location bomb_loc;  //player來設定
        int bomb_distance;  //由player放下bomb時設定

};

#endif
