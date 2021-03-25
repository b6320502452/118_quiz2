#include<stdio.h>
int ckCube(int n)
{
    int ck=0,i=2;
    for(i;i<n;i++)
    {
        if(i*i*i==n)
        {
            ck=1;
            break;
        }
    }
    if(i==1)
        return 0;
    return ck;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(ckCube(n))
    {
        printf("Not Cube Free");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(ckCube(i))
            {
                continue;
            }
            else
            {
                for(int j=1;j<=i;j++)
                {
                    if(i%(j*j*j)==0)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        printf("%d",count);
    }
}
