#pragma once
#include <cstdint>

class chip8 {
public:
    uint8_t registers[16]{};
    uint16_t index{};
    uint16_t pc{};
    uint16_t stack[16]{};
    uint16_t sp{};

    uint8_t memory[4096]{};
    uint8_t keyboard[16]{};
};
