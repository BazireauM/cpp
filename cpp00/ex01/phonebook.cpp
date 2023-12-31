/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:43:16 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 14:46:25 by mbazirea         ###   ########.fr       */
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
		this->m_index += 1;
	if (this->m_max_phone <= 7)
			this->m_max_phone += 1;
}

void	print(std::string tmp)
{
	int i(0);
	int test(0);

	while (i < 9 && tmp[i])
	{
		std::cout << tmp[i];
		i++;
		if (i == 9)
			test = 1;
	}
	while (i < 10 && !(test = 1 && tmp[9]))
	{
		std::cout << " ";
		i++;
	}
	if (test == 1 && tmp[9])
	{
		std::cout << ".";
	}
	std::cout << "|";
}

void	PhoneBook::search(void)
{
	int x(0);
	std::string tmp;

	if (this->m_max_phone == 0)
		return ;
	while (x < this->m_max_phone)
	{
		tmp = std::to_string(x);
		std::cout << std::setw(10) << std::left << (tmp.length() >= 10 ? tmp.substr(0, 9) + "." : tmp) << "|"
              << std::setw(10) << std::left << (m_contact[x].first_name().length() >= 10 ? m_contact[x].first_name().substr(0, 9) + "." : m_contact[x].first_name()) << "|"
              << std::setw(10) << std::left << (m_contact[x].last_name().length() >= 10 ? m_contact[x].last_name().substr(0, 9) + "." : m_contact[x].last_name()) << "|"
              << std::setw(10) << std::left << (m_contact[x].nickname().length() >= 10 ? m_contact[x].nickname().substr(0, 9) + "." : m_contact[x].nickname()) << "|"
              << std::endl;
		x++;
	}
	std::cout << "choose contact index" << std::endl;
	std::cin >> tmp;
	while(1)
	{
		std::istringstream(tmp) >> x;
		if (x < this->m_max_phone && !(x == 0 && tmp != "0"))
		{
			tmp = this->m_contact[x].first_name();
			std::cout << "first Name : " << tmp << std::endl;
			tmp = this->m_contact[x].last_name();
			std::cout << "last_name : " << tmp << std::endl;
			tmp = this->m_contact[x].nickname();
			std::cout << "nickname : " << tmp << std::endl;
			tmp = this->m_contact[x].phone_number();
			std::cout << "phone number : " << tmp << std::endl;
			tmp = this->m_contact[x].darkest_secret();
			std::cout << "darkest secret : " << tmp << std::endl;
			return ;
		}
		else
		{
			std::cout << "invalid index, choose a valid index" << std::endl;
			std::cin >> tmp;
		}
	}
}
