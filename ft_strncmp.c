/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:54:36 by vloth             #+#    #+#             */
/*   Updated: 2021/02/16 10:54:39 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i <= n - 1)
    {
        if (s1[i] != s2[i])
            return (s1[i]-s2[i]);
    i++;
    }
    return (0);
}
int main ()
{
    char tab[] = "Bonjour";
    char tab1[] = "Bonjout";
    printf("%d", ft_strncmp(tab, tab1, 7));
    return 0;
}