//
// Created by meow on 8/8/21.
//

#ifndef SDL2TEST_SOUND_EFFECT_H
#define SDL2TEST_SOUND_EFFECT_H

#include <iostream>
#include <string>
#include "SDL.h"
#include "SDL_mixer.h"
#include "helper.h"
class SoundEffect {
public:
    SoundEffect();
    ~SoundEffect();

    void PlayMusic();
    void PlayHitEffect();

private:
    Mix_Music *_music;
    Mix_Chunk *_hitEffect;
};
#endif //SDL2TEST_SOUND_EFFECT_H
