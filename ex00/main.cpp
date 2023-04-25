#include "easyfind.hpp"

int main()
{
    std::cout << "-----------This test for vector container-------\n";
    std::vector<int> vect;
    for (int index = 0; index < 5; ++index)
        vect.push_back(index);
    std::vector<int>::iterator it = vect.begin();
    while (it != vect.end())
    {
        std::cout << *it << ' ';
        ++it;
    }
    std::cout << '\n';
    try
    {
        easyfind(vect, 1);
        easyfind(vect, 7);
    }
    catch(std::exception& exception)
    {
        std::cout << exception.what();
    }
    std::cout << "-----------This test for list container-------\n";
    std::list<int> li(10);
    //fill ur list with numbers begin at 0.
    std::iota(li.begin(), li.end(), 0);
    std::list<int>::iterator iter = li.begin();//assign iter to the start of the list.
    while (iter != li.end())
    {
        std::cout << *iter << ' ';
        ++iter;
    }
    std::cout << "\n";
        try
    {
        easyfind(li, 1);
        easyfind(li, 17);
    }
    catch(std::exception& exception)
    {
        std::cout << exception.what();
    }
}