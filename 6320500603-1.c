#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[50];
    for(i=2;i<50;i++)
    {
       a[i-2]=i*i*i;
    }
   for(i=0;i<50;i++)
    {
        if(a[i]==n)
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




    return 0;
}
