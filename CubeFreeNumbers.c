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
    return ck;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(ckCube(n))
    {

    }
    for(int i=1;i<n;i++)
    {

    }
}
