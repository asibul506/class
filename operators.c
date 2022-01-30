// C Operators
#include<stdio.h>
int main()
{
    int i=1, j=5;
    //incremental operator (Prefix & Postfix)
    printf("i = %d \nj = %d",++i,j++);
    printf("\nJ = %d",j);

    printf("\n");
    //decremental operator (Prefix & Postfix)
    int a=10, b=2;
    printf("a = %d \nb = %d",--a,b--);
    printf("\nb = %d",b);

    /*
        prefix  --> execute from where it has declared
        postfix --> execute from the next line
    */

    //Arithmetic Operator (+, -, *, /, %)
    int x=100, y= 58;
    printf("\n%d\t%d\t%d\t%d\t%d",x+y, x-y, x*y, x/y, x%y);




}
