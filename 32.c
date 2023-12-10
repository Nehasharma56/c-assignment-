#include <stdio.h>
int main()
{
 printf("Neha sharma\n");
 int n,m=0;
 printf("Enter the number: \n");
 scanf("%d",&n);
 printf("The output is: \n");
 while(n!=0){
 n=n/10;
 m++;
 }
 printf("THE DIGITS IN THE NUMBER ARE: %d",m);
 return 0;
}
