#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int size);
void print_steps(int size);
void print_steps_dots(int size);


int main(void)
{
    // get size of grid
    int n = get_size();

    // print grid of bricks
    print_steps(n);
}


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_steps(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

void print_steps_dots(int size)
{
    for (int i = 0; i < size; i++)
    {
        /*for (int j = i; j < size; j++)*/
        /*{*/
        /*    printf("#");*/
        /*}*/
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
