/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreszka <jreszka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:14:39 by jreszka           #+#    #+#             */
/*   Updated: 2016/09/25 14:28:21 by jreszka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

/*
** Affiche la chaine s sur la sortie standard.
*/

void	ft_putstr(char const *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}
