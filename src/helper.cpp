//
// Created by meow on 8/8/21.
//


#include "helper.h"

int Helper::GetHighestScore()  {
    string line;
    int hScore;
    std::ifstream filestream(kDataDirectory+kHighestScoreFileName);
    if (filestream.is_open() && std::getline(filestream, line))
    {
        std::istringstream linestream(line);
        if (linestream >> hScore)
            return hScore;
    }
    return 0;
}
void Helper::SetHighestScore(const int score) {
    std::ofstream ofs(kDataDirectory+kHighestScoreFileName, std::ofstream::trunc);
    ofs << std::to_string(score);
    ofs.close();
}
void Helper::ResetHighestScoreFile() {
    std::ofstream ofs(kDataDirectory+kHighestScoreFileName, std::ofstream::trunc);
    ofs << "0";
    ofs.close();
}