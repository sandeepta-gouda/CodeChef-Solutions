#include<stdio.h>
int  main()
{
    
    long long int a,b,line;

    scanf("%lld",&line);
    if ( 1<= line && line<10000)
    {
        while (line)
        {
scanf("%lld%lld",&a,&b);

if (a<b)
   printf("<\n");

else if (a>b)
   printf(">\n"); 

else 

  printf("=\n"); 

            line--;
        }
        
        
    }
    


    return 0;
}