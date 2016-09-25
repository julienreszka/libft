/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreszka <jreszka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:05:58 by jreszka           #+#    #+#             */
/*   Updated: 2016/09/25 14:12:11 by jreszka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
**	Prints the character c on standard output
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int 	main(void)
{
	ft_putchar('!');
	ft_putchar('\n');
}
*/