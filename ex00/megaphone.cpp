/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 07:22:21 by bde-wits          #+#    #+#             */
/*   Updated: 2024/11/30 08:58:10 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int	main(int argc, char **argv)
{
	int		k = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (++k != argc)
	{
		std::string	temp = argv[k];
		for (int i = 0; argv[k][i] != '\0'; i++)
			temp[i] = std::toupper(argv[k][i]);
		std::cout << temp;
	}
	std::cout << std::endl;
}