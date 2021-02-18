/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 11:16:20 by vloth             #+#    #+#             */
/*   Updated: 2021/02/16 15:33:48 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int n;

    n = 0;
    i = 0;
    while (dest[i])
        i++;
    while (src[n])
    {
       dest[i] = src[n];
       i++;
       n++;
    }
    dest[i] = '\0';
    return(dest);
}
int main ()
{
    char tab[100] = "Bonjour ";
    char tab1[] = "covid19";
    printf("%s", ft_strcat(tab, tab1)); 
}
