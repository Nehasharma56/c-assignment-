#include <stdio.h>
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("Number is POSITIVE\n");
    }
    if(num < 0)
    {
        printf("Number is NEGATIVE\n");
    }
    if(num == 0)
    {
        printf("Number is ZERO\n");
    }
    printf("\n Neha sharma");
    return 0;
}
