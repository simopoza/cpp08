#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "------------list----------\n";
    std::list<int> li;
    li.push_back(5);
    li.push_back(17);
    std::cout << li.back() << std::endl;
    li.pop_back();
    std::cout << li.size() << std::endl;
    li.push_back(3);
    li.push_back(5);
    li.push_back(737);
    //[...]
    li.push_back(0);
    std::list<int>::iterator itt = li.begin();
    std::list<int>::iterator itte = li.end();
    ++itt;
    --itt;
    while (itt != itte)
    {
        std::cout << *itt << std::endl;
        ++itt;
    }
    std::list<int> r(li);
    return 0;
}