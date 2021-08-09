//
// Created by meow on 8/8/21.
//

#ifndef SDL2TEST_HELPER_H
#define SDL2TEST_HELPER_H
#include <fstream>
#include <string>
#include <sstream>

using std::string;

namespace Helper {
    const std::string kDataDirectory{"../data"};
    const std::string kSoundEffectDirectory{"../sound_effects"};
    const std::string kHighestScoreFileName{"/highest_score.txt"};
    const std::string kSoundEffectMusicFileName{"/arpanauts.ogg"};
    const std::string kSoundEffectHitFileName{"/hit.wav"};
    const std::string kSoundEffectJumpFileName{"/jump.wav"};
    int GetHighestScore() ;
    void SetHighestScore(const int score);
    void ResetHighestScoreFile();

}

#endif //SDL2TEST_HELPER_H
