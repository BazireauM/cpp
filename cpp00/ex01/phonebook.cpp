/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:43:16 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 13:38:02 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	m_index = 0;
	m_max_phone = 0;
}

void	PhoneBook::add(void)
{
	std::string tmp;

	std::cout << "First Name : ";
	std::cin >> tmp;
	this->m_contact[this->m_index].set_first_name(tmp);
	std::cout << "Last Name : ";
	std::cin >> tmp;
	this->m_contact[this->m_index].set_last_name(tmp);
	std::cout << "Nickname : ";
	std::cin >> tmp;
	this->m_contact[this->m_index].set_nickname(tmp);
	std::cout << "Phone Number : ";
	std::cin >> tmp;
	this->m_contact[this->m_index].set_phone_number(tmp);
	std::cout << "Darkest Secret : ";
	std::cin >> tmp;
	this->m_contact[this->m_index].set_darkest_secret(tmp);
	if (this->m_index >= 7)
		this->m_index = 0;
	else
		if (this->m_max_phone < 7)
			this->max_phone += 1;
		this->m_index += 1;
}

void	PhoneBook::search(void)
{
	int	i(0);
	int x(0);
	std::string tmp;

	while (x < this->m_max_phone)
	{
		std::cout << this->m_index << "         |";
		tmp = this->m_contact[x]
		while (i < 9 && tmp[i])
		{
			std::cout << this->tmp[i];
			i++;
		}
		while (i < 9)
		{
			std::cout << " ";
		}
		x++;
	}
}
