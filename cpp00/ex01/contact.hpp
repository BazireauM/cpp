/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:21:27 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 12:06:47 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "phonebook.hpp"

class Contact
{
	public:
	private:
		std::string m_first_name;
		std::string	m_last_name;
		std::string m_nickname;
		std::string m_phone_number;
		std::string	m_darkest_secret;
};

#endif //CONTACT_HPP
