/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_input.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 01:14:09 by melkholy          #+#    #+#             */
/*   Updated: 2023/05/13 01:33:42 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	name;
	int			age;

	std::cout << "What's your age? ";
	std::cin >> age;

	std::cout << "What's your name? ";
	std::getline(std::cin >> std::ws, name);
	std::cout << "Hello, " << name << "\n";
	std::cout << "You're " << age << " years old." << "\n";

	return (0);
}
