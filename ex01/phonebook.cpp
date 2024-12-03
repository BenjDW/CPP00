/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:07:32 by bde-wits          #+#    #+#             */
/*   Updated: 2024/12/03 10:28:29 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

// SEARCH : affiche le contact demandé
// ◦ Affiche les contacts enregistrés sous la forme d’une liste de 4 colonnes : index,
// first name, last name et nickname.
// ◦ Chaque colonne doit faire 10 caractères de long. Elles doivent être séparées
// par un pipe (’|’). Leur texte est aligné à droite. Si le texte dépasse la largeur
// de la colonne, il faut le tronquer et remplacer le dernier caractère affiché par
// un point (’.’).
// ◦ Ensuite, le programme demande à l’utilisateur d’entrer l’index du contact à afficher. Si l’index ou son format sont incorrects, gérez cela de manière pertinente.
// Sinon, affichez les informations du contact, une par ligne.

void	phone_book::search()
{
	std::string	solo_contact;
	int			solo;

	if (count == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    // Afficher l'en-tête // setw = set width
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::string(44, '-') << std::endl;  // Ligne de séparation
    // Afficher les contacts existants (limité à 8)
    for (int i = 0; i < count && i < 8; i++)
	{
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << trunc(contact[i]->getvar(0)) << "|"
                  << std::setw(10) << trunc(contact[i]->getvar(1)) << "|"
                  << std::setw(10) << trunc(contact[i]->getvar(2)) << std::endl;
    }
	while (1)
	{
		std::cout << "entre l'index du contact : ";
		std::getline(std::cin, solo_contact);
		if (all_number(solo_contact) == 0)
		{
			solo = std::stoi(solo_contact);
			if (solo > count || solo > 7 || solo < 0)
				std::cout << "need a valid index (0 to 7), overflow" << std::endl;
			break ;
		}
		else
			std::cout << "need only number" << std::endl;
	}
	std::cout << "First Name: " << contact[solo]->getvar(0) << std::endl;
	std::cout << "Last Name: " << contact[solo]->getvar(1) << std::endl;
	std::cout << "Nickname: " << contact[solo]->getvar(2) << std::endl;
	std::cout << "Phone Number: " << contact[solo]->getvar(3) << std::endl;
	std::cout << "Darkest Secret: " << contact[solo]->getvar(4) << std::endl;
}

int	all_number(std::string index)
{
	int i = -1;

	while (index[++i] != '\n')
	{
		if (!isdigit(index[i]))
			return (1);
	}
	return (0);
}

// Fonction pour tronquer une chaîne à 10 caractères
std::string trunc(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";  // Tronquer et ajouter un point
    return str;
}

std::string	Contact::getvar(int type) //getter
{
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

void	Contact::setvar(int type, std::string info) //setter
{
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
	int icpy = this->count % 8;

	std::cout << "First Name: " << std::endl;
    std::getline(std::cin, temp);
    contact->setvar(0, temp);
    
    std::cout << "Last Name: " << std::endl;
    std::getline(std::cin, temp);
    contact->setvar(1, temp);

    std::cout << "Nickname: " << std::endl;
    std::getline(std::cin, temp);
    contact->setvar(2, temp);

    std::cout << "Phone Number: " << std::endl;
    std::getline(std::cin, temp);
    contact->setvar(3, temp);

    std::cout << "Darkest Secret: " << std::endl;
    std::getline(std::cin, temp);
    contact->setvar(4, temp);

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
