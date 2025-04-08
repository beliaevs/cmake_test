#include "f.h"
#include<iostream>

bool isRelease()
{
#ifdef NDEBUG 
    return true;
#else
    return false;
#endif
}

int main()
{
    std::cout << (isRelease() ? "Release build" : "Debug build") << "\n";
    std::cout << "Hello!\n";
    std::cout << "f() = " << f() << "\n";
    std::cout << print_cont(get_primes()) << "\n";
    return 0;
}