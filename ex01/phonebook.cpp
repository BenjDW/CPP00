/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:07:32 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/01 11:07:27 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
#include <iostream>
#include <string>

// recupere la value associe dans le phonebook et la renvoie
// std::string		getvar(int pos)
// {

// 	return ();
// }

// char	*setvar(std::string *str, int pos)
// {
	
// }

int	main(int argc, char **argv)
{
	phone_book	repertoire;
	contact		contact;
	std::string	temp;
	int			i = 0;

	(void)argc;
	while(1)
	{
		std::getline(std::cin, temp, '\n');
		if (temp.compare("EXIT") == 0)
			// std::exit
		if (temp.compare("ADD") == 0)
			// 
		if (temp.compare("SEARCH") == 0)
			// 
	}
}
