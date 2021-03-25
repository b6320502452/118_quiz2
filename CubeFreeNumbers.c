#include<stdio.h>
int ckCube(int n)
{
    if(n==1)
        return 0;
    for(int i=2;i<n;i++)
    {
        if(n%(i*i*i)==0)
            return 1;
    }
    return 0;
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
               count++;
        }
        printf("%d",count);
    }
}
