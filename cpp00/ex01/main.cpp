/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:27:28 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 12:06:53 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string command("1");
	while (command != "EXIT")
	{
		std::cin >> command;
		if (command == "ADD")
		{
			std::cout << "add\n";
		}
		else if (command == "SEARCH")
		{
			std::cout << "search\n";
		}
	}
	return (0);
}
