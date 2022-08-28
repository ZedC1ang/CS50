// World 1-1

#include <cs50.h>
#include <stdio.h>

void hash(int n);

int main(void)
{
    // Check right values
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Make World 1-1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1) - i; j++)
        {
            printf(" ");
        }
        hash(i + 1);
        printf("  ");
        hash(i + 1);
        printf("\n");
    }
}

// Prints hashes
void hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}
