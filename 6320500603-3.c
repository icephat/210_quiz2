#include<stdio.h>
int main()
{
    int n,k,i,x=0,a=0;

    scanf("%d",&n);

    if(n>1&&n<1000000)
    {
        if(n<=10)
        {
            for(i=0;i<n-1;)
            {
                i=i+1;
                a++;
            }
            printf("%d",a);

        }
        int b=a;
        if(n>10&&n<=100)
        {
            for(k=0;k<n-1;)
            {
                k=k+11;
                x++;
            }
            printf("%d",x+b);
        }

    }




    return 0;
}
