#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    if (N <= 1)
        throw found();
    this->N = N;
    vect.reserve(N);
}

Span::Span(const Span& obj)
{
    this->N = obj.N;
    this->vect = obj.vect;
}

Span& Span::operator=(const Span& obj)
{
    this->N = obj.N;
    this->vect = obj.vect;
    return (*this);
}

Span::~Span()
{
}

void    Span::addNumbers(int begin, int size)
{
	if (vect.size() + (unsigned int)size > this->N)
		throw big();
	for (int i = 0; i < size; i++, begin++)
		vect.push_back(begin);
}

void Span::addNumber(int num)
{
    if (vect.size() >= this->N)
        throw big();
    vect.push_back(num);
}

int Span::shortestSpan(void)
{
    sort(vect.begin(), vect.end() + 1);
    int tmp = vect[1] - vect[0];
    if (vect.size() == 2)
        return (tmp);
    std::vector<int>::iterator it = vect.begin() + 1;
    while ((*(it + 1) - *it) == 1 && it != (vect.end() - 1))
    {
        if (*(it + 1) - *it < tmp)
            tmp = *(it + 1) - *it;
        it++;
    }
    return (tmp);
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator it = max_element(vect.begin(), vect.end());
	std::vector<int>::iterator it2 = min_element(vect.begin(), vect.end());
	return (*it - *it2);
}

void    Span::range_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector <int> added(begin, end);
	if (added.size() + vect.size() > this->N)
		throw big();
	this->vect.insert(vect.end(), added.begin(), added.end());
}
