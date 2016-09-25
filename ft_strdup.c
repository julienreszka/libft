/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreszka <jreszka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/25 14:37:56 by jreszka           #+#    #+#             */
/*   Updated: 2016/09/25 15:01:13 by jreszka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Retourne un pointeur vers une nouvelle chaine de caracteres qui est une 
**	copie de la chaine s. La memoire vers la nouvelle chaine est obtenue avec malloc.
*/

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s);
{
	size_t	len;
	char	*str;

	if(!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*s) * (len + 1));
	ft_strcpy(str, s);
	return (str);
}
