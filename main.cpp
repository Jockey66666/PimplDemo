#include "Widget.h"
#include <iostream>

int main() {
    Widget w;
    w.SetWidth(50);
    w.SetHeight(100);
    std::cout << w.GetWidth() << " " << w.GetHeight();
    return 0;
}