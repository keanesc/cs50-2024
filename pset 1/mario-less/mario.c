#include <cs50.h>
#include <stdio.h>

// Prompt the user for the pyramid's height
int get_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1);
    return height;
}

// Print bricks
void print_row(int spaces, int bricks)
{
    // Print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Print row of bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    // Get the height from the user
    int n = get_height();

    // Print a pyramid of that height
    for (int i = 1; i <= n; i++)
    {
        print_row(n - i, i);
    }
}
