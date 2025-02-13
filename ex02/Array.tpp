#include "Array.hpp"

template <typename T>
Array<T>::Array() : _size(0), _array(NULL) {
    std::cout << "Null array" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n), _array(new T[n]) {}

template <typename T>
Array<T>::Array(const Array &copy) : _size(copy._size), _array(new T[copy._size]) {
    for (size_t i = 0; i < _size; ++i)
        _array[i] = copy._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &source) {
    if (this != &source) {
        delete[] _array;
        _size = source._size;
        _array = new T[_size];
        for (size_t i = 0; i < _size; ++i)
            _array[i] = source._array[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int n) {
    if (n >= _size)
        throw OutOfBounds();
    return _array[n];
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}