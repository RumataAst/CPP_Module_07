#pragma once
#include <iostream>
#include <exception>

template <class T>
class Array {
private:
    unsigned int    _size;
    T*              _array;

public:
    Array();
    Array(unsigned int n);
    Array(const Array &copy);
    Array &operator=(const Array &source);
    T &operator[](unsigned int n);
    ~Array();

    unsigned int    size() const;

    class OutOfBounds : public std::exception {
        public:
            const char* what() const throw() {
                return "Index is out of bounds";
            }
    };
};
