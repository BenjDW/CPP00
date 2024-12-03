/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 05:52:46 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/03 06:54:32 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <locale>

// void	getvar(char *str);
class Contact;

class	phone_book
{
	public:
		int	count;
		phone_book(); //constructeur
		~phone_book() //destructeur
		{
			delete[] contact;
		}
		std::string	getvar(int index, int type); //getter
		// {
		// 	if (index < 0 || index > 7)
		// 		return (NULL);
		// 	if (type == 0)
		// 		return (firstname[index]);
		// 	if (type == 1)
		// 		return (lastname[index]);
		// 	if (type == 2)
		// 		return (nickname[index]);
		// 	if (type == 3)
		// 		return (phonenumber[index]);
		// 	if (type == 4)
		// 		return (darkest_secret[index]);
		// }
		// void	setvar(int index, int type, std::string info); //setter
		// {
		// 	if (index < 0 || index > 7)
		// 		return ;
		// 	if (type == 0)
		// 		firstname[index] = info.c_str();
		// 	if (type == 1)
		// 		lastname[index] = info.c_str();
		// 	if (type == 2)
		// 		nickname[index] = info.c_str();
		// 	if (type == 3)
		// 		phonenumber[index] = info.c_str();
		// 	if (type == 4)
		// 		darkest_secret[index] = info.c_str();
		// }
		void	add(std::string temp);
	private:
		Contact	*contact[8];
	// Les champs d’un contact enregistré ne peuvent être vides.
};

class	Contact
{
	public:
		void	setvar(int index, int type, std::string info); //setter
		std::string	getvar(int index, int type); //getter
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkest_secret;
};

// 	return ();
// }
// class class
// {
// private:
// 	/* data */
// public:
// 	class(/* args */);
// 	~class();
// };

// class::class(/* args */)
// {
// }

// class::~class()
// {
// }

// class	phone_book
// {
// 	public:
// 		int	count;
// 		phone_book(); //constructeur
// 		~phone_book(); //destructeur
// 		std::string	getvar(int index, int type); //getter
// 		// {
// 		// 	if (index < 0 || index > 7)
// 		// 		return (NULL);
// 		// 	if (type == 0)
// 		// 		return (firstname[index]);
// 		// 	if (type == 1)
// 		// 		return (lastname[index]);
// 		// 	if (type == 2)
// 		// 		return (nickname[index]);
// 		// 	if (type == 3)
// 		// 		return (phonenumber[index]);
// 		// 	if (type == 4)
// 		// 		return (darkest_secret[index]);
// 		// }
// 		// void	setvar(int index, int type, std::string info); //setter
// 		// {
// 		// 	if (index < 0 || index > 7)
// 		// 		return ;
// 		// 	if (type == 0)
// 		// 		firstname[index] = info.c_str();
// 		// 	if (type == 1)
// 		// 		lastname[index] = info.c_str();
// 		// 	if (type == 2)
// 		// 		nickname[index] = info.c_str();
// 		// 	if (type == 3)
// 		// 		phonenumber[index] = info.c_str();
// 		// 	if (type == 4)
// 		// 		darkest_secret[index] = info.c_str();
// 		// }
// 		void	add(std::string temp, int *i, phone_book repertoire);
// 	private:
// 		Contact	contact[8];
// 	// Les champs d’un contact enregistré ne peuvent être vides.
// };
#endif