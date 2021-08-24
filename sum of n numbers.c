#include<stdio.h>
int main()
{
    int num, sum=0, limit;
    printf("Enter the limit : ");
    scanf("%d",&limit);
    num=1;
    while(num<=limit)
    {
        if(num==limit){
            printf("%d",num);
        }
        else{
            printf("%d + ",num);
        }
        sum+=num;

        num++;
    }
    printf("\nSum is : %d",sum);

}
