//A Program to print Alphabet in a reverse order
#include<stdio.h>
int main() //return type
{
    char i = 'Z'; //Initialization

    while(i>='A')
    {
        printf("%c ",i);
        i--;
    }
    return 0;
}
