/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:42:58 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/12 17:09:02 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;
	char	*str;

	temp = NULL;
	str = (char *)s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			temp = (str + i);
		i++;
	}
	if (!(char)c)
		temp = (str + i);
	return (temp);
}
