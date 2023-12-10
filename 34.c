
#include <stdio.h>
int main() {
 int n,a,b;
 printf("Enter a number: ");
 scanf("%d",&n);
 a = n%10;
 while (n>= 10){
 n/= 10;
 }
 b=n;
 printf("The sum of first and last digit is:%d.",a+b);
 printf("\n Neha sharma");
 return 0;
}
