#ifndef CANVAS_H
#define CANVAS_H

#include "widget.hpp"
#include "structs.hpp"

class Canvas {
public:
    void put(int x, int y, wchar_t ch, const Style& style);
    void fill(const Rect& r, wchar_t ch, const Style& style);
    void drawText(int x, int y, const wchar_t* text, size_t length, const Style& style);
};

#endif