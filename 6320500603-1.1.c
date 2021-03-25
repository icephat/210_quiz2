#include<stdio.h>
int main()
{
    int n,i;
   // scanf("%d",&n);

    int a[20];
    for(i=1;i<20;i++)
    {
        if(i*i*i==i)
        {
            a[i]=i;
            printf("%d ",a[i]);
        }
    }




    return 0;
}
