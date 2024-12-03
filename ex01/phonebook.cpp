/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:07:32 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/03 06:57:49 by bde-wits         ###   ########.fr       */
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

// void	search(phone_book repertoire, int index)
// {
// 	if (repertoire. == NULL)
// 		std::cout << "aucun contact dans le repertoire" << std::endl;
// 	std::cout << repertoire.getvar(index, 0) << std::endl;
// }

std::string	Contact::getvar(int index, int type) //getter
{
	if (index < 0 || index > 7)
		return (NULL);
	if (type == 0)
		return (firstname);
	if (type == 1)
		return (lastname);
	if (type == 2)
		return (nickname);
	if (type == 3)
		return (phonenumber);
	if (type == 4)
		return (darkest_secret);
}

void	Contact::setvar(int index, int type, std::string info) //setter
{
	if (index < 0 || index > 7)
		return ;
	if (type == 0)
		this->firstname = info; //.c_str();
	if (type == 1)
		this->lastname = info;
	if (type == 2)
		this->nickname = info;
	if (type == 3)
		this->phonenumber = info;
	if (type == 4)
		this->darkest_secret = info;
}

void	phone_book::add(std::string temp)
{
	Contact	*contact = new Contact;
	int	index = 0;
	int icpy = this->count % 8;

	while(1)
	{
		std::getline(std::cin, temp, '\n');
		switch (index)
		{
			case 0:
				contact->setvar(icpy, index, temp);
			case 1:
				contact->setvar(icpy, index, temp);
			case 2:
				contact->setvar(icpy, index, temp);
			case 3:
				contact->setvar(icpy, index, temp);
			case 4:
				contact->setvar(icpy, index, temp);
			case 5:
				break;
		}
		index++;
	}
	this->contact[icpy] = contact;
	this->count += 1;
}

int	main(int argc, char **argv)
{
	phone_book	repertoire;
	Contact		contact;
	std::string	temp;

	(void)argc;
	repertoire.count = 0;
	while(1)
	{
		std::getline(std::cin, temp, '\n');
		if (temp.compare("EXIT") == 0)
			exit(0);
		if (temp.compare("ADD") == 0)
			repertoire.add(temp);
		if (temp.compare("SEARCH") == 0)
			// search(&repertoire, );
	}
}
