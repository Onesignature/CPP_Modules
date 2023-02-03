/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsaeed <bsaeed@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 20:25:29 by bsaeed            #+#    #+#             */
/*   Updated: 2023/02/03 20:30:01 by bsaeed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	int	i = 0;
	int j = 0;
	while (av[++i])
	{
		j = 0;
		while (av[i][j])
			putchar(toupper(av[i][j++]));
	}
	std::cout << std::endl;
	return (0);
}