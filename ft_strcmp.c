/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:10:19 by vloth             #+#    #+#             */
/*   Updated: 2021/02/18 15:57:42 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] || s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i]-s2[i]);
    i++;
    }
    return (0);
}
int main ()
{
    char tab[] = "njour";
    char tab1[] = "Bonjour";
    printf("%d", ft_strcmp(tab, tab1));
    return 0;
}
