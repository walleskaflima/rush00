#include <unistd.h>

void    ft_putchar(char c)
{
  write(1, &c, 1);
}

void    rush(int x, int y)
{
    int    i = 0;
    int    j = 0;

    if (x <= 1 ) {write (1, "", 1);}
    else
    { 
        ft_putchar('o');
    if (x > 1)
    {
        while (i < x - 2)
        {
            ft_putchar('-');
            i++;
        }
        ft_putchar('o');
    }
    }
    ft_putchar('\n');
    if (y > 1)
    {
        while (j < y - 2)
        {
            i = 0;
            ft_putchar('|');
            if (x > 1)
            {
                while (i < x - 2)
                {
                    ft_putchar(' ');
                    i++;
                }
                ft_putchar('|');
            }
            ft_putchar('\n');
            j++;
        }
        i = 0;
        if (x <= 1 ) {write (1, "", 1);}
        else{
            ft_putchar('o');
        if (x > 1)
        {
            while (i < x - 2)
            {
                ft_putchar('-');
                i++;
            }
            ft_putchar('o');
        }
        ft_putchar('\n');
        }
    }
}

int main()
{
  rush(5,3);
  return (0);
}