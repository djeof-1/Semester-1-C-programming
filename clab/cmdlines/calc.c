#include<stdio.h>
int main(int argc, char *argv[])
{
 int x;
 float y;
 if (argv[2][0]=='+')
    {
     x=atoi(argv[1])+atoi(argv[3]);
     printf("%d\n",x);
    }
  if (argv[2][0]=='-')
      {
       x=atoi(argv[1])-atoi(argv[3]);
       printf("%d\n",x);
      }
   if (argv[2][0]=='*')
      {
       x=atoi(argv[1])*atoi(argv[3]);
       printf("%d\n",x);
      }
   if (argv[2][0]=='/')
      {
       y=(float)atoi(argv[1])/atoi(argv[3]);
       printf("%f\n",y);
      }
}      

  
