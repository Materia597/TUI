#ifndef BACKEND_H
#define BACKEND_H

#include <Windows.h>
#include <vector>
#include "structs.hpp"


class ConsoleBackend {

public:
    virtual ~ConsoleBackend() = default;

    virtual void resize(int width, int height) = 0;
    virtual void write(int x, int y, const Cell& cell) = 0;
    virtual void writeSpan(int x, int y, const Cell* cells, size_t count) = 0;
    virtual void flush() = 0;

    virtual std::vector<InputEvent>pollInput() = 0;

};

#endif