/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:21:27 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 12:57:42 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include "phonebook.hpp"

class Contact
{
	public:
		std::string first_name(void);
		std::string last_name(void);
		std::string nickname(void);
		std::string phone_number(void);
		std::string darkest_secret(void);
		void		set_first_name(std::string s);
		void		set_last_name(std::string s);
		void		set_nickname(std::string s);
		void		set_phone_number(std::string s);
		void		set_darkest_secret(std::string s);
	private:
		std::string m_first_name;
		std::string	m_last_name;
		std::string m_nickname;
		std::string m_phone_number;
		std::string	m_darkest_secret;
};

#endif //CONTACT_HPP
