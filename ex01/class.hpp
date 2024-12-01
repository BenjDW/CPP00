/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 05:52:46 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/01 11:19:22 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <locale>

// void	getvar(char *str);

class	phone_book
{
	public:
		phone_book();
		~phone_book();
		getvar(); //getter
		setvar(); //setter
	private:
		char	**firstname;
		char	**lastname;
		char	**nickname;
		char	**phonenumber;
		char	**darkest_secret;
	// Les champs d’un contact enregistré ne peuvent être vides.
};

class	contact
{
	public:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkest_secret;
};

class::phone_book::getvar(int)
{

}

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

#endif