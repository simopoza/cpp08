#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <numeric>

class Span
{
    std::vector<int> vect;
    unsigned int N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        ~Span();
        void addNumber(int num);
        int shortestSpan(void);
        int longestSpan(void);
        void    addNumbers(int begin, int size);
        void    range_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        class big : public std::exception
        {
            public :
                const char * what() const throw()
                {
                    return ("bigger than the size of vector\n");
                }
        };
        class found : public std::exception
        {
            public :
                const char * what() const throw()
                {
                    return ("There is no span\n");
                }
        };
};

#endif