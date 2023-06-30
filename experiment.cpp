#include <iostream>
#include <vector>

namespace	first
{
	int	x = 1;
}

namespace	Second
{
	int	x = 2;
}

// "::" -> scope resolutioon operator
// "<<" insertion operator
// ">>" extraction operator
// typedef std::vector< std::pair<std::string, int> > pairlist_t;

// and starting from c++11 we can use the using keyword:
// using pairlist_t = std::vector< std::pair<std::string, int> >;

// typedef std::string string;

int	main(void)
{
	// string	shop;
	// int		size;
	// char	csize;
	// int		price;
	// int		num;
	//
	// size = 28;
	// csize = 'L';
	// shop = "Pizza Hut";
	// num = 3;
	// price = 12;
	// std::cout << "I like to eat pizaa" << std::endl;
	// std::cout << "it's really good to have it with friends!" << '\n';
	// std::cout << "My favorite pizza size is: " << size << std::endl;
	// std::cout << "Which is " << csize << " in " << shop << '\n';
	// std::cout << "Price for my pizza is " << price * num << std::endl;
	// std::cout << "done." << std::endl;

	// double const	PI = 3.14159;
	// double			radius;
	// double			circumference;
	//
	// radius = 10;
	// circumference = 2 * PI * radius;
	// std::cout << "The circl circumference is " << circumference << "cm." << std::endl;
	
	// using std::cout;
	// using std::string;
	// using namespace first;
	// int	x = 0;
	// std::cout << first::x << std::endl;
	
	// pairlist_t pairlist;
	
	std::string	name;
	int			age;

	std::cout << "How old are you? ";
	std::cin >> age;
	std::cout << "What's your full name? ";
	// std::cin >> name;
	std::getline(std::cin >> std::ws, name);

	std::cout << "Hello, " << name << std::endl;
	std::cout << "You entered " << age << " as your age." << std::endl;
	return (0);
}
