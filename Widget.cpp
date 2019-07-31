#include "Widget.h"
#include <iostream>

class Widget::Impl {
public:
    void Foo() {
        std::cout << "Foo" << std::endl;
    }
};

Widget::Widget()
    : m_Impl(std::make_unique<Impl>()){
}

void Widget::Foo() {
    m_Impl->Foo();
}