#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[50];
    for(i=1;i<50;i++)
    {
       a[i-1]=i*i*i;

    }
    for(i=0;i<50;i++)
    {
        if(a[i]==a[n])
        {
            printf("Not Cube Free");
            break;
        }
        else
        {
            printf("%d",i);
            break;
        }
    }




    return 0;
}
