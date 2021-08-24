#include<stdio.h>
int main()
{
    int range, i, count=0, num, j;
    printf("Enter the range: ");
    scanf("%d",&range);

    i=0;
    j=2;
    while(i<=range)
    {
       while(j<i)
       {
           if(i%j==0)
           {
               count++;
           }
       }
       if(count==0)
       {
           printf("%d ",i);
       }
       i++;
       count=0;
    }

}
