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

Widget::~Widget() = default;

void Widget::Foo() {
    m_Impl->Foo();
}