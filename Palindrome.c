#include<stdio.h>
#include<string.h>
void int_to_text(int n,char text[])
{
    for(int i=0;n!=0;i++,n/=10)
        text[i]=(n%10)+'0';
}
int ckPalin(char text[])
{
    char tmp[8];
    strcpy(tmp,text);
    strrev(tmp);
    if(!strcmp(tmp,text))
    {
        return 1;
    }
    else return 0;
}
int main()
{
    int n,count=0;
    char text[8]={'\0'};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int_to_text(i,text);
        if(ckPalin(text))
            count++;
    }
    printf("%d",count);
}
