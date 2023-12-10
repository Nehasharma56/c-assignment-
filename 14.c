#include<stdio.h>
int main()
{
    int length,width,height,area,volume;

    printf("enter the length:");
    scanf("%d",&length);

    printf("enter the width:");
    scanf("%d",&width);

    printf("enter the height:");
    scanf("%d",&height);


    volume = length*width*height;
    area = 2*(length*width + length*height + height*width);

    printf("area of the given cuboid is %d and volume of cuboid is %d\n ",area,volume);
    printf("\n Neha sharma");

    return 0;
}






