//
// Created by meow on 8/8/21.
//

#include "sound_effect.h"

SoundEffect::SoundEffect() {
    if (Mix_OpenAudio(44100 ,MIX_DEFAULT_FORMAT , 2, 2048) == 0) {
        _mixMusic = Mix_LoadMUS()
    } else{
        std::cerr << "Error on Mix_OpenAudio\n";
    }
}