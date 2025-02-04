// HW #03 Gabriel Cotua
// Tuesday 02/04/2025
#include <ctype.h>
#include <stdio.h>

#define CONSOLE "\033[32m[Console]\033[0m"
#define DEBUG "\033[33m[Debug]\033[0m"

int main(void)
{
    printf("\n\n|#####################|\n");
    printf("|HW #03, Gabriel Cotua|\n");
    printf("|#####################|\n\n");

    // part 1
    char chr1, chr2;
    printf(CONSOLE " Insert a character: ");
    scanf("%c", &chr1); // takes user input and assign it to chr1
    chr2 = chr1;        // assigns chr1 to chr2

    // printf("%c %c", Chr1, chr2); // Sanity check

    // part 2
    // [a]
    printf("\n" DEBUG " The if-else code segment is being executed.\n");
    // [b]
    printf(CONSOLE " Printing Chr1: %c\n", chr1);

    // [c]
    if (islower(chr1) && chr1 != 'a')
    { // [c.1]
        chr1 = toupper(chr1);
        printf(DEBUG " is lower if-statement executed successfully\n");
    }
    else if (isupper(chr1) && chr1 != 'A')
    { // [c.2]
        chr1 = tolower(chr1);
        printf(DEBUG " is upper if-statement executed successfully\n");
    }
    else if (isdigit(chr1))
    { // [c.3]
        chr1 = chr1 + 5;
        printf(DEBUG " is a number if-statement executed successfully\n");
        // printf( DEBUG " The number is: %d\n", chr1); // another sanity check
    }
    else
    {
        printf(DEBUG " The character is an \'a\' or \'A\' and is not a letter or a number\n");
    }
    // [d]
    printf(CONSOLE " printing chr1 as char: %c\n" CONSOLE " printing chr1 as integer: %d\n\n", chr1, chr1);

    //  printf("is number: %s\n", (isdigit(chr1)) ? "true" : "false"); //another sanity check

    // part 3
    //  [a]
    printf(DEBUG " The switch-case segment is being executed.\n");
    // [b]
    printf(CONSOLE " Printing chr2: %c\n", chr2);
    // [c]
    switch (islower(chr2) ? 1 : 0)
    {
    case 1:
        // [c.1]
        if (chr2 != 'a' && !isdigit(chr2))
        {
            chr2 = toupper(chr2);
            printf(DEBUG " is lower case-statement executed successfully\n");
        }
        break; // Add break here to prevent fall-through
    case 0:
        // [c.2]
        if (chr2 != 'A' && !isdigit(chr2))
        {
            chr2 = tolower(chr2);
            printf(DEBUG " is upper case-statement executed successfully\n");
            break;
        }

    default:
        // [c.3]
        if (isdigit(chr2))
        {
            chr2 = chr2 + 5;
            printf(DEBUG " is a number case-statement executed successfully\n");
            break;
        }
        else
        {
            printf(DEBUG " The character is an \'a\' or \'A\' and is not a letter or a number\n");
            break;
        }
    }

    printf(CONSOLE " printing chr2 as char: %c\n" CONSOLE " printing chr2 as integer: %d\n\n", chr2, chr2);

    return 0;
}