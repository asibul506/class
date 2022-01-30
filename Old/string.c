#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int age;
    printf("Enter you name : ");
    scanf("%s",&name);
    printf("Enter your age : ");
    scanf("%d",&age);

    if (age>=18){
        printf("Congratulation Mr./Mrs. %s. You are eligible for casing a vote!",name);
    }else{
        printf("Sorry Mr./Mrs. %s. you are not eligible for casting a vote this year. You have to wait for %d years!",name, 18-age);
    }


    return 0;
}
