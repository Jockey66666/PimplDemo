#include "Widget.h"
#include "Pimpl.cpp"
#include <iostream>

template class Pimpl<Widget::Impl>;

class Widget::Impl {
public:
    Impl() = default;
    Impl(int width, int height)
        : m_Width(width)
        , m_Height(height) {
    }

    void Foo() {
        std::cout << "Foo" << std::endl;
        std::cout << m_Width << " " << m_Height << std::endl;
    }

private:
    int m_Width;
    int m_Height;
};

void Widget::Foo() {
    m_Impl->Foo();
}

Widget::Widget() = default;

Widget::Widget(int width, int height)
    : m_Impl(width, height) {
}