#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    if(n>=1&&n<=1000000)
    {
        int a[50];
        for(i=2;i<50;i++)
        {
            a[i-2]=i*i*i;
        }
        for(i=0;i<50;i++)
        {
            if(a[i]==n||n==16||n==24||n==32)
            {
                printf("Not Cube Free");
                break;
            }
            else
            {
                printf("%d",n);
                break;
            }
        }
    }





    return 0;
}
