#ifndef PIMPLDEMO_WIDGET_H
#define PIMPLDEMO_WIDGET_H

#include <memory>

class Widget {
public:
    Widget();
    ~Widget();

    Widget(const Widget& ) = delete;
    Widget& operator=(const Widget& ) = delete;

    Widget(Widget&& );
    Widget& operator=(Widget&& );

public:
    void Foo();

private:
    class Impl;
    std::unique_ptr<Impl> m_Impl;
};


#endif //PIMPLDEMO_WIDGET_H
