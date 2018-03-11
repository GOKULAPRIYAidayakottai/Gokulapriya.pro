/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,j,k,count=0,l1,l2,l=0;
    printf("enter two strings : ");
    scanf("%s%s",&a,&b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;((i<l1)||(i<l2));i++)
    {
            if(a[i]==b[i])
            {
                 printf("  hai");
                continue;
                
            }
            else
            {
                for(k=i;k<l1;k++)
                {
                    if(b[i]==a[k])
                    {
                       l=k-i;
                       break;
                    }
                }
                if(l!=0)
                {
                    for(k=0;k<l;k++)
                    {
                    for(j=i;j<l1;j++)
                    {
                        a[j]=a[j+1];
                    }
                    }
                    count=count+l;
                }
                else
                {
                    a[i]=b[j];
                    count++;
                }
            }
    }
    printf("%s",a);
}
