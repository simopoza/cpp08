#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <numeric>
#include <string>
#include <vector>
#include <list>


class found : public std::exception
{
    public:
        const char *what() const throw()
        {
            return ("The num is not found\n");
        }
};

template <typename T>

void    easyfind(T first, const int second)
{
    if ((std::find(first.begin(), first.end(), second)) == first.end())
        throw found();
    std::cout << "The num is = " << second << std::endl;
}

#endif