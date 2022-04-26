#include<stdio.h>
int main()
{
    int a,n,i,j=1,count=1;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        while(j<=a)
        {
            printf("%d ",j);
            j++;
        }count++;
        j=count;
        printf("
");
    }
}