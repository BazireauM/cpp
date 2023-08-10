/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:08:30 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 13:38:04 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::first_name(void)
{
	return (this->m_first_name);
}

std::string	Contact::last_name(void)
{
	return (this->m_last_name);
}

std::string	Contact::nickname(void)
{
	return (this->m_nickname);
}

std::string	Contact::phone_number(void)
{
	return (this->m_phone_number);
}

std::string	Contact::darkest_secret(void)
{
	return (this->m_darkest_secret);
}

void	Contact::set_first_name(std::string s)
{
	this->m_first_name = s;
}

void	Contact::set_last_name(std::string s)
{
	this->m_last_name = s;
}

void	Contact::set_nickname(std::string s)
{
	this->m_nickname = s;
}

void	Contact::set_phone_number(std::string s)
{
	this->m_phone_number = s;
}

void	Contact::set_darkest_secret(std::string s)
{
	this->m_darkest_secret = s;
}
