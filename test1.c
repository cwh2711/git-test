#include <stdio.h>
#include <string.h>

int re(int b,int c)
{

   if (b<c)
   {
      return 1 + re(b + 1, c);
   }
   else
   {
      return 0;
   }

}
int main()
{
   char a[10];
   int b,c,d;
   scanf("%s",&a);
   scanf("%2d %2d",&b,&c);
   d=re(b,c);
   printf("a=");
   printf("%s\n",a);
   printf("d=%d",d);
   printf("\n");
   printf("ok");
   return 0;
}
