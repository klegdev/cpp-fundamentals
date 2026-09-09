#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    if(count <= 0)
        return std::vector<int>{};
    int sum = step;
    std::vector<int> sequence = {sum};
    for (size_t i = 1; i < count; i++) {
        sum += step;
        sequence.push_back(sum);
    }
    return sequence;
}
