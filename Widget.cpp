#include "Widget.h"
#include "Pimpl.cpp"
#include <iostream>

template class Pimpl<Widget::Impl>;

class Widget::Impl {
public:
    void Foo() {
        std::cout << "Foo" << std::endl;
    }
};

void Widget::Foo() {
    m_Impl->Foo();
}