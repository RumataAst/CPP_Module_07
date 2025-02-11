#pragma once

template <class T>
class Array {
private:
    T               array[];
    unsigned int    _size;
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
            const char*     what() const throw() {
                return ("Index is out of bounds");
            }
    }
};
