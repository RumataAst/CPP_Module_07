#pragma once

#include <iostream>

template <typename T, typename X>
void    iter(T &address_of_array, size_t length, void (*f)(T&)) {
    for (size_t i = 0; i < length; ++i)
        f(address_of_array[i]);
}


// template <typename C, typename V>
// void    iter(C &address_of_array, size_t length, V f) {
//     if ( !length || !f) {
//         std::cerr << "Error, invalid arguments\n";
//         return ;
//     }
//     for (size_t i = 0; i < length; ++i)
//         f(address_of_array[i]);
// }

