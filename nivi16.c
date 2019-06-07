#include<stdio.h>
#include<math.h>
int main()
{
 int num,temp=0,r,q;
 scanf("%d",&num);
 q=num;
 do
 {
      r=q%10;
      temp=temp+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",temp);
 return 0;
}
