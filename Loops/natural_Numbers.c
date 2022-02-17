//Print all the numbers that are divisible by 3 from 500 to 1000
#include<stdio.h>
int main() //return type
{
    int i = 500; //Initialization
    do
    {
        if(i%3==0)
        {
            printf("%d ",i);
        }

        i++;
    } while(i<=1000);

    return 0;
}
