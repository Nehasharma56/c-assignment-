#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp;
    float per;

    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);

    if(per >= 90)
    {
        printf("Grade A\n");
    }
    else if(per >= 80)
    {
        printf("Grade B\n");
    }
    else if(per >= 70)
    {
        printf("Grade C\n");
    }
    else if(per >= 60)
    {
        printf("Grade D\n");
    }
    else if(per >= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("Grade F\n");
    }
     printf("Neha sharma");
    return 0;
}
