#include <stdio.h>
int main()
{
    int cp,sp, amt;

    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);

    if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit = %d\n", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss = %d\n", amt);
    }
    else
    {
        printf("No Profit No Loss\n.");
    }
    printf("Neha sharma");
    return 0;
}
