/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hypotenuse.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:46:15 by melkholy          #+#    #+#             */
/*   Updated: 2023/06/21 22:36:07 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int	main(void)
{
	// double	a;
	// double	b;
	// double	c;
	//
	// std::cout << "Enter side A: ";
	// std::cin >> a;
	// std::cout << "Enter side B: ";
	// std::cin >> b;
	//
	// c = sqrt(pow(a, 2) + pow(b, 2));
	// std::cout << "Side C: " << c << std::endl;
	
	char	grade;

	std::cout << "Enter your grade: ";
	std::cin >> grade;

	switch (grade)
	{
		case 'A':
			std::cout << "You're from the 1 percentile\n";
			break;
		case 'B':
			std::cout << "You're from the 20 percentile\n";
			break;
		case 'C':
			std::cout << "You're from the 50 percentile\n";
			break;
		case 'D':
			std::cout << "You're from the 20 percentile\n";
			break;
		case 'F':
			std::cout << "You're from the 10 precentile\n";
			break;
		default:
			std::cout << "Please enter a vaild character (A, B, C, D)" << '\n';
	}

	int	num;

	std::cout << "Enter your grade number: ";
	std::cin >> num;
	// (num > 50) ? std::cout << "You Passed\n" : std::cout << "You Failed\n";
	//or
	std::cout << (num >= 50 ? "You Passed\n" : "You Failed\n");
	return (0);
}
