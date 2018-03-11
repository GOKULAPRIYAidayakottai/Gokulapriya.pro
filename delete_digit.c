

#include <stdio.h>
#include<string.h>
int main()
{
    int n,k,a,i=0,s[10],l;
    printf("enter the number : ");
    scanf("%d",&n);
    printf("enter no of digits want to be delete : ");
    scanf("%d",&k);
    a=n;
    while(a>0)
    {
        s[i]=a%10;
        i++;
        a=a/10;
    }
    l=i-k-1;
    printf("number = ");
    for(i=l;i>=0;i--)
    {
        printf("%d",s[i]);
    }
    return 0;
}
