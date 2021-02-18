/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:36:01 by vloth             #+#    #+#             */
/*   Updated: 2021/02/16 15:36:04 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int n;

    n = 0;
    i = 0;
    while (dest[i])
        i++;
    while (n <= nb - 1) 
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
    char tab1[] = "beau gosse de la street";
    printf("%s", ft_strncat(tab, tab1, 10));
}
