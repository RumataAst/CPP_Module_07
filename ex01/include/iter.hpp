#pragma once

#include <iostream>

template <typename C, typename V>
void    iter(C &address_of_array, size_t length, V f) {
    if ( !length) {
        std::cerr << "Error, invalid arguments\n";
        return ;
    }
    for (size_t i = 0; i < length; ++i)
        f(address_of_array[i]);
}

