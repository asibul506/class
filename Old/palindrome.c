#include<stdio.h>
int main()
{
    int num, reminder, reverse = 0, old;
    printf("Enter a number : ");
    scanf("%d",&num);

    old=num;

    while(num==0)
    {
        reminder=num%10;
        reverse=reverse*10+reminder;
        num/=10;
    }

    if(reverse==old){
        printf("Palindrome!");
    }
    else
    {
        printf("Not Palindrome!");
    }
}
