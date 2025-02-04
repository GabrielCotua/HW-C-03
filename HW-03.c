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

    if (!(chr1 == 'a' || chr1 == 'A') && (isdigit(chr1) || isalpha(chr1))) // only allows characters or numbers to pass
    {
        // [b]
        printf(CONSOLE " Printing Chr1: %c\n", chr1);

        // [c]
        if (islower(chr1) && chr1 != 'a')
        {   // [c.1]
            chr1 = toupper(chr1);
            printf(DEBUG " is lower if-statement executed successfully\n");
        }
        else if (isupper(chr1) && chr1 != 'A')
        {   // [c.2]
            chr1 = tolower(chr1);
            printf(DEBUG " is upper if-statement executed successfully\n");
        }
        else
        {   // [c.3]
            chr1 = chr1 + 5;
            printf(DEBUG " is a number if-statement executed successfully\n");
            // printf( DEBUG " The number is: %d\n", chr1); // another sanity check
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
        switch (islower(chr2) ? 1 : 0) // checks if the character is lower case
        {
        case 1: // if true
            // [c.1]
            chr2 = toupper(chr2);
            printf(DEBUG " is lower case-statement executed successfully\n");
            break;

        case 0: //if false
            // [c.2]
            if(!isdigit(chr2))
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
            }
            break;
        }

        printf(CONSOLE " printing chr2 as char: %c\n" CONSOLE " printing chr2 as integer: %d\n\n", chr2, chr2);
    }
    else
    {
        printf(DEBUG " the input is invalid ['a', 'A', non-digit, non-alphabetic]\n");
    }
    return 0;
}
/*
expected output:

[Capital Letter]

|#####################|
|HW #03, Gabriel Cotua|
|#####################|

[Console] Insert a character: S 

[Debug] The if-else code segment is being executed.
[Console] Printing Chr1: S
[Debug] is upper if-statement executed successfully
[Console] printing chr1 as char: s
[Console] printing chr1 as integer: 115

[Debug] The switch-case segment is being executed.
[Console] Printing chr2: S
[Debug] is upper case-statement executed successfully
[Console] printing chr2 as char: s
[Console] printing chr2 as integer: 115

|--------------->

[Lowercase Letter]

|#####################|
|HW #03, Gabriel Cotua|
|#####################|

[Console] Insert a character: s

[Debug] The if-else code segment is being executed.
[Console] Printing Chr1: s
[Debug] is lower if-statement executed successfully
[Console] printing chr1 as char: S
[Console] printing chr1 as integer: 83

[Debug] The switch-case segment is being executed.
[Console] Printing chr2: s
[Debug] is lower case-statement executed successfully
[Console] printing chr2 as char: S
[Console] printing chr2 as integer: 83

|--------------->

[Numerical Value] (only takes one digit)

|#####################|
|HW #03, Gabriel Cotua|
|#####################|

[Console] Insert a character: 3

[Debug] The if-else code segment is being executed.
[Console] Printing Chr1: 3
[Debug] is a number if-statement executed successfully
[Console] printing chr1 as char: 8
[Console] printing chr1 as integer: 56

[Debug] The switch-case segment is being executed.
[Console] Printing chr2: 3
[Debug] is upper case-statement executed successfully
[Console] printing chr2 as char: 3
[Console] printing chr2 as integer: 51

|--------------->

[Else]

|#####################|
|HW #03, Gabriel Cotua|
|#####################|

[Console] Insert a character: #

[Debug] The if-else code segment is being executed.
[Debug] the input is invalid ['a', 'A', non-digit, non-alphabetic]

*/