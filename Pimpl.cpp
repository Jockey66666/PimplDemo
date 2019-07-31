#include "Pimpl.h"

template <typename T>
Pimpl<T>::Pimpl()
    : m_Ptr(std::make_unique<T>()) {
}

template <typename T>
template <typename ... Args>
Pimpl<T>::Pimpl(Args&& ... args)
    : m_Ptr(std::make_unique<T>( std::forward<Args>(args)... )) {

}

template <typename T>
Pimpl<T>::~Pimpl() = default;

template <typename T>
Pimpl<T>::Pimpl(Pimpl&& ) = default;

template <typename T>
Pimpl<T>& Pimpl<T>::operator=(Pimpl&& ) = default;

template <typename T>
T* Pimpl<T>::operator->() {
    return m_Ptr.get();
}

template <typename T>
T& Pimpl<T>::operator*() {
    return *m_Ptr;
}