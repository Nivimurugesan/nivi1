#include <stdio.h>
int main()
{
    int n,i,k=0;
    printf("Enter a integer: ");
    scanf("%d", &n);

    for(i=2;i<=n/2;++i)
    {
        if(n%i == 0)
        {
            k = 1;
            break;
        }
    }

    if (n==1) 
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else 
    {
        if (flag == 0)
          printf("yes");
        else
          printf("no");
    }
    return 0;
}
