#include <stdio.h>

int main()
{
    int i,number,power,result=1;
    printf("enter a number :");
    scanf("%d",&number);
    printf("enter the power :");
    scanf("%d",&power);
    for(i=1;i<=power;i++)
    {
          result*=number;
        
    }
      printf("result = %d",result);



    return 0;
}