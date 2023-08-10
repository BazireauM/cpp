/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbazirea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 09:47:42 by mbazirea          #+#    #+#             */
/*   Updated: 2023/08/10 10:32:23 by mbazirea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	main(int argc, char *argv[])
{
	int	i(1);
	int	x(0);

	if (argc < 2)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return (0);
	}
	while (i < argc)
	{
		x = 0;
		while (argv[i][x])
		{
			cout << (char)toupper(argv[i][x]);
			x++;
		}
		i++;
	}
	cout << endl;
	return (0);
}
