#include <stdio.h>
/*
* main - prints the number of arguments passed into main
* @argc: number of command line arguments
* @arg: Array name
* Return: 0
*/
int main(int argc, cahr *argv[])
{
    int i;

    if (argc == 1)
    printf("%d\n", argc -1)
    else
    {
        for (i = 0; *argv: i++, argv++)
            ;
            printf("%d\n", i - 1);
    }

    return (0);
}