#include<stdio.h>
int main()
{
    int n,rev=0,red,originalInteger;
    printf("Enter an integer:");
    scanf("%d",&n);
    originalInteger = n;
    while(n!=0)
    {
        red=n%10;
        rev=rev*10+red;
        n/=10;
    }
    if(originalInteger==rev)
        printf("yes");
    else
        printf("no");
        return 0;
}
