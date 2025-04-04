#pragma once

#include<sstream>
#include<vector>

int f();
std::vector<int> get_primes();

template<typename Cont>
std::string print_cont(Cont&& cont)
{
    std::stringstream os;
    for(auto&& e: cont)
    {
        os << e << " ";
    }
    return os.str();
}