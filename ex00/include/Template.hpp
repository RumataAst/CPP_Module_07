#pragma once

#include <iostream>


template <typename T>
void swap(T &first_arg, T &second_arg){
    T temp;

    temp = first_arg;
    first_arg = second_arg;
    second_arg = temp;
};

template <typename T>
const T &min(const T &first_arg,const T &second_arg){
    if (first_arg < second_arg)
        return first_arg;
    return second_arg;
}

template <typename T>
const T &max(const T &first_arg, const T &second_arg){
    if (first_arg > second_arg)
        return first_arg;
    return second_arg;
}

