#ifndef PIMPLDEMO_WIDGET_H
#define PIMPLDEMO_WIDGET_H

#include <memory>

class Widget {
public:
    Widget();
    ~Widget();

public:
    void Foo();

private:
    class Impl;
    std::unique_ptr<Impl> m_Impl;
};


#endif //PIMPLDEMO_WIDGET_H
