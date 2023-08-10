/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:48:34 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 12:06:49 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	add(Contact contact);
		void	search(Contact contact);
	private:
		Contact m_contact[8];
		int m_index;
};

#endif //PHONEBOOK_HPP