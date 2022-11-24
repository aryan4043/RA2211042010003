#include <stdio.h>
int main()
{
 int billamt,amtgiven;
 int q,r;
 scanf("%d",&amtgiven);
 scanf("%d",&billamt);
 q=amtgiven/billamt;
 r=amtgiven%billamt;
 printf("Quotient:%d\nRemainder:%d",q,r);
return 0;
}
