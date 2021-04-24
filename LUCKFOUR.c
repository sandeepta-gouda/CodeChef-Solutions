#include<stdio.h>
int num()
{ int rem,o,c=4,x;
scanf("%d",&x);
o=0;
 while (x)
 {
   rem=x%10;
   if(rem==c)
   o++;
x=x/10;

 }
return o;

 
}
 



int main()
{
    int n;
    long int arr[100000];

scanf("%ld",&n);


for(int i=1;i<=n;i++)
{
    arr[i]=num( );
}
for(int i=1;i<=n;i++)
{
   printf("%d\n",arr[i]);
}

}