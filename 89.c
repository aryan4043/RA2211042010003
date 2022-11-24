#include <stdio.h>
int main()
{
int alvqntoffood,messcnt,dividedqnt,remfood;
scanf("%d\t",&alvqntoffood);
scanf("%d",&messcnt);
dividedqnt=alvqntoffood/messcnt;
remfood=alvqntoffood%messcnt;
printf("%d %d\t",dividedqnt,remfood);
return 0;
}
