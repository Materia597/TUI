#ifndef WIDGET_H
#define WIDGET_H

#include "structs.hpp"
#include "canvas.hpp"

class Widget {
public:
    virtual ~Widget() = default;

    virtual Size measure(Size contstrains) = 0;
    virtual void layout(Rect bounds) = 0;
    virtual void render(Canvas& canvas) = 0;

    virtual bool handleEvent(const InputEvent& e) = 0;
};

#endif