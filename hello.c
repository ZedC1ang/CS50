// get_string and printf with %s
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Prompt user for name
    string name = get_string("What's your name? "); // Prompt users to enter a name

    // Perform hello
    printf("hello, %s\n", name);
}
