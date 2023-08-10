/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 10:48:34 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 13:38:08 by mbazirea         ###   ########.fr       */
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
		void	add(void);
		void	search(void);
	private:
		Contact m_contact[8];
		int m_index;
		int m_max_phone;
};

#endif //PHONEBOOK_HPP
