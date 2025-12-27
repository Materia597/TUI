#ifndef STRUCTS_HPP
#define STRUCTS_HPP

#include <Windows.h>

enum class Key {
    Up, Down, Left, RIght,
    Enter, Escape,
    Character
};

struct InputEvent {
    Key key;
    wchar_t ch;
    bool shift;
    bool ctrl;
    bool alt;
};

struct Rect {
    int x, y, w, h;
};

struct Size {
    int w, h;
};

struct Cell {
    wchar_t ch;
    WORD attributes;
};

struct Style {
    WORD attributes;
};

#endif