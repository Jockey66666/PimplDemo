#ifndef PIMPLDEMO_WIDGET_H
#define PIMPLDEMO_WIDGET_H

#include "Pimpl.h"

class Widget {
public:
    void Foo();

private:
    class Impl;
    Pimpl<Impl> m_Impl;
};


#endif //PIMPLDEMO_WIDGET_H
