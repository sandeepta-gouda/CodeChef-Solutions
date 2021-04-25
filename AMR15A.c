#include<stdio.h>

int main(void)
{
int sol,odd=0,even=0,i,num;
scanf("%d",&num);
while (num--)
{

  scanf("%d",&sol);
  if (sol%2==0)
  even++;
  else
  odd++;
}
if (even<=odd)
 printf("NOT READY\n");
else
   printf("READY FOR BATTLE\n");
return 0 ;
}