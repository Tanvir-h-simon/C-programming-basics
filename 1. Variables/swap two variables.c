#include <stdio.h>
int main()
{
    int a, b, temp;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    //swap values using third values

    temp=a; //stores the value of 'a' in the 'temp' variable
    a=b; //assigns the value of 'b' to 'a'
    b=temp; //assigns the value stored in 'temp' (original value of 'a') to 'b'

    printf("After swapping: \n");
    printf("value of a: %d\n", a);
    printf("Value of b: %d", b);

    return 0;
}
