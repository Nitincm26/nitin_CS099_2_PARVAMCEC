#include <stdio.h>
int main()
{
    /*
    & -> address operator (to get address of a variable)
    * -> value operator(to get a value form the specified address)

    bodmas rule

    *(&a)
    *(1000)
    */
    int a = 0, b = 0;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    printf("The sum of two numbers: %d \n", (a + b));
    printf("The address of a: %p", &a);
    printf("The value  of a: %d", *(&a));
    return 0;
}