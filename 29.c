#include <stdio.h>
int main()
{
 printf("Neha sharma\n");
 int n,c=0;

 printf("Enter the number: \n");
 scanf("%d",&n);

 printf("The output is: \n");

 for(int i=2;i<=n;i++){
 if(i%2==0){
 c=c+i;
 }
 }
 printf("%d",c);
 return 0;
}

