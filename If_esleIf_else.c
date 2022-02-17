#include<stdio.h>
main()
{
    char alph;
    printf("Enter a letter : ");
    scanf("%c",&alph);

    if(alph == 'a')
    {
        printf("Vowel");
    }
    else if(alph=='e')
    {
        printf("Vowel");
    }
    else if(alph=='i')
    {
        printf("Vowel");
    }
    else if(alph=='o')
    {
        printf("Vowel");
    }
    else if(alph=='u')
    {
        printf("Vowel");
    }
    else
    {
        alph++;
        printf("%c ",alph);
        printf("Consonant");
    }
}
