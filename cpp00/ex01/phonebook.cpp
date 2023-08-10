/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:43:16 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 13:01:19 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	m_index = 0;
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
}
