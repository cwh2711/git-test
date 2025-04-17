#include <stdio.h>
#include <string.h>
int main()
{
   char a[2];
   scanf("%1s",&a);
   printf("a=");
   printf("%s\n",a);
   printf("dangerous:no bound !!!cannot connect");
   return 0;
}
