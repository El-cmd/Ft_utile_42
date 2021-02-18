#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

int atoi(char *str)
{
    int i;
    int n;
    
    i = 0;
    n = 0;
    
    while (str[i])
    {
        if (ft_strlen(str) == 1)
            if (str[i] >= '0' && str[i] <= '9')
            {
                n = str[i] - 48;
                return n;
            }
        if (ft_strlen(tab) > 1)
    }
    return (0);
}
int main ()
{
    char tab[] = "2";
    printf("%d", atoi(tab));
    return 0;
}