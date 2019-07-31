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

    void SetWidth(int width) {
        m_Width = width;
    }

    int GetWidth() const {
        return m_Width;
    }

    void SetHeight(int height) {
        m_Height = height;
    }

    int GetHeight() const {
        return m_Height;
    }

private:
    int m_Width;
    int m_Height;
};

void Widget::SetWidth(int width) {
    m_Impl->SetWidth(width);
}

int Widget::GetWidth() const {
    return m_Impl->GetWidth();
}

void Widget::SetHeight(int height) {
    m_Impl->SetHeight(height);
}

int Widget::GetHeight() const {
    return m_Impl->GetHeight();
}

Widget::Widget() = default;

Widget::Widget(int width, int height)
    : m_Impl(width, height) {
}