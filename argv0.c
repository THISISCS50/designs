#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
//argc = argument count, counts length of string at prompt
//argv is the varaiable that can be used to get the word
{
    if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
    }

    else
    {
        printf("Hello, world\n");
    }
}