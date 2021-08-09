//
// Created by meow on 8/8/21.
//

#include "sound_effect.h"

SoundEffect::SoundEffect() {
    if (Mix_OpenAudio(44100 ,MIX_DEFAULT_FORMAT , 1, 2048) < 0) { //channels = 2 for stereo sound
        std::cerr << "Error on Mix_OpenAudio\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }
    Mix_AllocateChannels(32);
    std::string filename = Helper::kSoundEffectDirectory + Helper::kSoundEffectMusicFileName;
    _music = Mix_LoadMUS(filename.c_str());
    if (_music == NULL) {
        std::cerr << "Error on Mix_LoadMUS\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }
    filename = Helper::kSoundEffectDirectory + Helper::kSoundEffectGrowFileName;
    _growEffect = Mix_LoadWAV(filename.c_str());
    if (_growEffect == NULL) {
        std::cerr << "Error on Mix_LoadWAV\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }
    filename = Helper::kSoundEffectDirectory + Helper::kSoundEffectHitFileName;
    _hitEffect = Mix_LoadWAV(filename.c_str());
    if (_hitEffect == NULL) {
        std::cerr << "Error on Mix_LoadWAV\n";
        std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
    }

}

SoundEffect::~SoundEffect() {
    Mix_FreeChunk(_hitEffect);
    Mix_FreeMusic(_music);
    Mix_Quit();
}

void SoundEffect::PlayMusic() {
    if (!Mix_PlayingMusic()) //check that music is not being played
        Mix_PlayMusic(_music , -1); // play music and loop infinitely
}
void SoundEffect::ResumeMusic() {
    if (Mix_PausedMusic())
        Mix_ResumeMusic();
}

void SoundEffect::PauseMusic(){
    if (Mix_PlayingMusic())
        Mix_PausedMusic();
}


void SoundEffect::PlayHitEffect() {
    Mix_PlayChannel(0,_hitEffect,0);
}

void SoundEffect::PlayGrowEffect() {
    Mix_PlayChannel(0,_growEffect,0);
}