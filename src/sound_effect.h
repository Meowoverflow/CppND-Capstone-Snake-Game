//
// Created by meow on 8/8/21.
//

#ifndef SDL2TEST_SOUND_EFFECT_H
#define SDL2TEST_SOUND_EFFECT_H
#include <SDL_mixer.h>
#include <iostream>
class SoundEffect {
    SoundEffect();

private:
    Mix_Music *_mixMusic;
    Mix_Chunk *_mixChunk;
};
#endif //SDL2TEST_SOUND_EFFECT_H
