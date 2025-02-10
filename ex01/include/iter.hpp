#pragma once

#include <iostream>

template <typename T, typename X>
void    iter(const T &address_of_array, size_t length, const X f) {
    if ( !length || !f) {
        std::cerr << "Error, invalid arguments\n";
        return ;
    }
    for (size_t i = 0; i < length; ++i)
        f(address_of_array[i]);
}