#include <iostream>
#include <cctype>
int main(int ac, char *av[])
{
    int i = 1;
    int j = 0;
    (void)av;
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    if (ac == 2)
    {
        if (av[1][0] == '\0')
        {
            std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
            return (0);
        }
    }
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
                std::cout << (char)std::toupper(av[i][j]);
            else
                std::cout << av[i][j];
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}