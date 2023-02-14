/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tofujiwa <tofujiwa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 18:43:10 by tofujiwa          #+#    #+#             */
/*   Updated: 2023/02/14 15:03:01 by tofujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr((char *)set, s1[start]) && s1)
		start++;
	while (ft_strrchr((char *)set, s1[end]) && s1 && end > start)
		end--;
	if (start > end)
		return (NULL);
	trim = ft_substr(s1, start, end - start + 1);
	return (trim);
}
