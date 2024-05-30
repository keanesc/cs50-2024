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
    while (height < 1 || height > 8);
    return height;
}

// Prints bricks
void print_bricks(int bricks)
{
    // Print row of bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

// Prints each row
void print_row(int spaces, int bricks, int gap)
{
    // Print spaces
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    // Calls print_bricks
    print_bricks(bricks);

    // Prints the gap
    for (int i = 0; i < gap; i++)
    {
        printf(" ");
    }

    // Calls print_bricks
    print_bricks(bricks);
    printf("\n");
}

int main(void)
{
    // Get the height from the user
    int n = get_height();

    // Print a pyramid of that height
    for (int i = 1; i <= n; i++)
    {
        print_row(n - i, i, 2);
    }
}
