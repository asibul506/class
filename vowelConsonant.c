//A program to identify vowel or consonant
#include<stdio.h>
int main()
{
   char letter;
   printf("Enter a letter : ");
   scanf("%c",&letter);

   switch(letter)
   {
        case 'a':
        {
            printf("Vowel");
            break;
        }
        case 'e':
        {
            printf("Vowel");
            break;
        }
        case 'i':
        {
            printf("Vowel");
            break;
        }
        case 'o':
        {
            printf("Vowel");
            break;
        }
        case 'u':
        {
            printf("Vowel");
            break;
        }
        default:
            {
                printf("Consonant");
                break;
            }
   }

    return 0;
}

