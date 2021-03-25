#include<stdio.h>
int ckCube(int n)
{
    int ck=0,i=2;
    for(i;i<n;i++)
    {
        if(n==(i*i*i))
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
            if(!ckCube(i))
            {
                count++;
            }
        }
        printf("%d",count);
    }
}
