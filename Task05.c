#include<stdio.h>
main()
{ 
  int n,r,re,i; 
printf("Enter Number:");
scanf("%d",&n); 
while(n!=0)
 { r=n%10;
  re=re*10+r; 
  n/=10;
 }
    printf("Reverse Number:%d",re); 
}
