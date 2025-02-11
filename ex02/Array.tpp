#include "Array.hpp"

template <typename T> Array::Array() : _size(0), _array(NULL){
    std::cout << "Null array" << std::endl;
}

template <typename T> Array(unsigned int n) : _size(n){
    new array[] = new T[size]; 
}

template <typename T> Array::Array(const Array &copy){
    this->_size = copy._size;
    this->_array = new T[copy._size];
    for (size_t i; i < this->_size; ++i)
        this->array[i] = copy._array[i];
}
template <typename T> Array &Array::operator=(const Array &source){
    if (this != &source) {
        this->_size = source._size;
        this->_array = new T[source._size];
        for (size_t i; i < this->_size; ++i)
            this->array[i] = source._array[i];
    }
    return *this;
}

template <typename T> Array:: &T::operator[](unsigned int n) {
    if (n > _size)
        throw (GradeTooLowException);
    return array[n];
}

template <typename T> Array::~Array(){
    delete (this->_array);
}

template <typename T> unsigned int    Array::size() const{
    return _size;
}
