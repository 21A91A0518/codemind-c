#include<stdio.h>
int main()
{
    int n,r,sq,s=0;
    scanf("%d %d",&n,&r);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        s=s+r;
        sq=sq/10;
    }
if(s==n)
printf("Neon Number");
else
printf("Not Neon Number");
return 0;
}