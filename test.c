#include<stdio.h>
#include<math.h>

int main()
{
    int num,sum;
    printf("Enter a number between 1 to 100 : ");
    scanf("%d",&num);

    sum= pow(((num*(num+1)) /2),2);
    printf("%d",sum);


}
