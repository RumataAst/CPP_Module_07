#include "iter.hpp"

template<typename T>
void print(T &a){
    std::cout << a << " ";
}

template<typename T>
void plus_one(T &a) {
    a++;
}

struct ConstFunctor {
    void operator()(int x) const {  // const operator()
        std::cout << "ConstFunctor: " << x << "\n";
    }
};

int main(void){
    int     array[5] = {0, 1, 2, 3 , 4};
    char    array_str[5] = {'a', 'b', 'c', 'd', 'e'}; 
    float   array_float[5] = {0.15, 0.2, 0.5125, 0.124, 0.2};
    ConstFunctor cf;
    iter(array, 5, cf);
    iter(array_str, 5, cf);
    iter(array_float, 5, cf);

    iter(array, 5, print<int>);
    std::cout << std::endl;
    iter(array_str, 5, print<char>);
    std::cout << std::endl;
    iter(array_float, 5, print<float>);
    std::cout << std::endl;

    std::cout << "------------------" << std::endl;
    
    iter(array, 5, plus_one<int>);
    iter(array, 5, print<int>);
    std::cout << std::endl;

    iter(array_str, 5, plus_one<char>);
    iter(array_str, 5, print<char>);
    std::cout << std::endl;

    iter(array_float, 5, plus_one<float>);
    iter(array_float, 5, print<float>);
    std::cout << std::endl;

}