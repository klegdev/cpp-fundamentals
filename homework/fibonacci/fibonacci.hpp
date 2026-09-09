#pragma once
#include <cstddef>

int fibonacci_iterative(int sequence) {
    if (sequence < 1)
        return 0;
    int a = 0;
    int b = 1;
    for (size_t i = 0; i < sequence; i++) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return a;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1)
        return sequence;
    else
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}
