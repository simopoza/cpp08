#include "Span.hpp"

int main()
{
	try
	{
		Span span(50);
		span.addNumber(1);
		span.addNumber(3);
		span.addNumber(2);
		span.addNumbers(4, 47);
		std::cout << "longest span  : " << span.longestSpan() << std::endl;
		std::cout << "shortest span : " << span.shortestSpan() << std::endl;
	}
	catch(std::exception& exception)
	{
		std::cout << exception.what();
	}
	try
    {
        Span span(5);
        span.addNumber(100);
        std::vector <int> vect;
        d.push_back(20);
        d.push_back(30);
        d.push_back(0);
		d.push_back(1);
        span.range_iterator(d.begin(), d.end());
        std::cout << "longest span  : " << span.longestSpan() << std::endl;
        std::cout << "shortest span : " << span.shortestSpan() << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << exception.what();
    }
  return 0;
}