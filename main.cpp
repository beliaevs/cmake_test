#include "f.h"
#include<iostream>

int main()
{
    std::cout << "Hello!\n";
    std::cout << "f() = " << f() << "\n";
    std::cout << print_cont(get_primes()) << "\n";
    return 0;
}