#include <stdio.h>
int main()
{
 int n,m,a;
 int stones;
 scanf("%d %d %d",&n,&m,&a);
stones=((n+a-1)/a)*((m+a-1)/a);
 printf("%d",stones);
return 0;
}
