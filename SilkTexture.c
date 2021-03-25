#include<stdio.h>
#include<string.h>
int main()
{
    int n,code,p,q,r;
    scanf("%d %d",&n,&code);
    char arr[n][71];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<70;j++)
            arr[i][j]='o';
    }
    for(int i=0;i<code;i++)
    {
        scanf("%d %d %d",&p,&q,&r);
        for(int j=0;j<r;j++)
        {
            arr[p-1][q-1+j]='x';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<70;j++)
            printf("%c",arr[i][j]);
        printf("\n");
    }
}
