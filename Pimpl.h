#ifndef PIMPLDEMO_PIMPL_H
#define PIMPLDEMO_PIMPL_H

#include <memory>

template <typename T>
class Pimpl {
public:
    Pimpl();

    template <typename ... Args>
    Pimpl(Args&& ...);

    ~Pimpl();

    Pimpl(const Pimpl& ) = delete;
    Pimpl& operator=(const Pimpl& ) = delete;

    Pimpl(Pimpl&& );
    Pimpl& operator=(Pimpl&& );

    T* operator->() const;
    T& operator*();
private:
    std::unique_ptr<T> m_Ptr;
};


#endif //PIMPLDEMO_PIMPL_H
