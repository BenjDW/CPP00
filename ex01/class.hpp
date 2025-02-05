/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 05:52:46 by bde-wits          #+#    #+#             */
/*   Updated: 2025/02/05 07:50:44 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include <locale>
#include <stdlib.h>

// void	getvar(char *str);
class Contact;

class	phone_book
{
	public:
		int	count;
		phone_book();
		~phone_book();
		void	add(std::string temp);
		void	search();
	private:
		Contact	*contact[8];
};

class	Contact
{
	public:
		void	setvar(int type, std::string info);
		std::string	getvar(int type);
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkest_secret;
};

std::string trunc(const std::string& str);
int			all_number(std::string index);

#endif