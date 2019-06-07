#include<stdio.h>
int main()
{
    int low,high,j,k;
    scanf("%d %d", &low, &high);
    while (low<high)
    {
        k=0;
        for(j=2;j<=low/2;++j)
        {
            if(low%j==0)
            {
                k=1;
                break;
            }
        }

        if (k==0)
            printf("%d ",low);
        ++low;
    }
    return 0;
}
