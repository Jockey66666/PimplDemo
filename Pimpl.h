#ifndef PIMPLDEMO_PIMPL_H
#define PIMPLDEMO_PIMPL_H

#include <memory>

template <typename T>
class Pimpl {
public:
    Pimpl();
    ~Pimpl();

    Pimpl(const Pimpl& ) = delete;
    Pimpl& operator=(const Pimpl& ) = delete;

    Pimpl(Pimpl&& );
    Pimpl& operator=(Pimpl&& );

    T* operator->();
    T& operator*();
private:
    std::unique_ptr<T> m_Ptr;
};


#endif //PIMPLDEMO_PIMPL_H
