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
    const std::string kHighestScoreFileName{"/highest_score.txt"};
    int GetHighestScore();
    void SetHighestScore(int score);
    void ResetHighestScoreFile();

}

#endif //SDL2TEST_HELPER_H
