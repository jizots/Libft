#include "includes/libft.h"
#include "includes/libft_utils.h"
#include <stdio.h>

int main()
{
    puts("--- Test ft_atoi ---");
    if (ft_atoi("123") == atoi("123"))
        puts("success");
    else
        puts("fault");

    puts("--- Test ft_bzero ---");
    char str[10] = "123456789";
    ft_bzero(str, 10);
    if (str[0] == 0)
        puts("success");
    else
        puts("fault");
}