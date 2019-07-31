#ifndef PIMPLDEMO_WIDGET_H
#define PIMPLDEMO_WIDGET_H

#include "Pimpl.h"

class Widget {
public:
    Widget();
    Widget(int width, int height);

    void SetWidth(int width);
    int GetWidth() const;

    void SetHeight(int height);
    int GetHeight() const;

private:
    class Impl;
    Pimpl<Impl> m_Impl;
};


#endif //PIMPLDEMO_WIDGET_H
