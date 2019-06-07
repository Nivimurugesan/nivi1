#include <stdio.h>
int main()
{
    int n,originalNumber,red,res=0;
    scanf("%d",&n);
    originalNumber=n;
    while(originalNumber!=0)
    {
        red=originalNumber%10;
        res+=red*red*red;
        originalNumber/=10;
    }
    if(res==n)
        printf("yes");
    else
        printf("no");
    return 0;
}
