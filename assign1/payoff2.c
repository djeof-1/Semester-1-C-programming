#include <stdio.h>
int main()
     {
     int mpy,ny,nm,nd,nh;	 
     float cogg,cm,mpgb,mpga,ycdbm,ycdam,a,z,p,l;
     printf("no of miles driven in year is\n");
     scanf("%d",&mpy);	 
     printf("cost of galion of gasoline(in dollars) is\n");
     scanf("%f",&cogg);
     printf("cost of modification is\n");
     scanf("%f",&cm);
     printf("mpg before modification is\n");
     scanf("%f",&mpgb);
     printf("mpg after modification is\n");
     scanf("%f",&mpga);
     ycdbm=(mpy/mpgb)*(cogg);
     printf("cost of driving without modification in $ is %3.2f\n",ycdbm);
     ycdam=(mpy/mpga)*(cogg);
     printf("cost of driving with modification in $ is %3.2f\n",ycdam);
     a=cm/(ycdbm-ycdam);
     printf("%f\n",a); 
     ny=a;
     z=(a-ny);
     printf("%f\n",z);
     nm=z*12;
     p=(z*12)-nm;
     printf("%f\n",p);
     nd=(p)*30;
     l=(p)*30-nd;
     printf("%f\n",l); 
     nh=l*24;
      printf("%d,%d,%d,%d\n",ny,nm,nd,nh);
     if(ny==0 && nm==0 && nd==0 && nh==0)
     	{
     	printf("it does not take any time\n");
     	}
     else if(ny==0 && nm==0 && nd==0 && nh==1)
     	{
     	printf("1 hour\n");
     	}	
     else if(ny==0 && nm==0 && nd==0 && nh>=2)
     	{
     	printf("%d hours\n",nh);
     	}	
     else if(ny==0 && nm==0 && nd==1 && nh==0)
     	{
     	printf("1 day\n");
     	}	
     else if(ny==0 && nm==0 && nd==1 && nh==1)
     	{
     	printf("1 day and 1 hour\n");
     	}	
     else if(ny==0 && nm==0 && nd==1 && nh>=2)
     	{
     	printf("1 day and %d hours\n",nh);
     	}	
     else if(ny==0 && nm==0 && nd>=2 && nh==0)
     	{
     	printf("%d days\n",nd);
     	}	
     else if(ny==0 && nm==0 && nd>=2 && nh==1)
     	{
     	printf("%d days and 1 hour\n",nd);
     	}	
     else if(ny==0 && nm==0 && nd>=2 && nh>=2)
     	{
     	printf("%d days and %d hours\n",nd,nh);
     	}	
     else if(ny==0 && nm==1 && nd>=0 && nh==0)
     	{
     	printf("1 month\n");
     	}	
     else if(ny==0 && nm==1 && nd==0 && nh==1)
     	{
     	printf("1 month and 1 hour\n");
     	}	
     else if(ny==0 && nm==1 && nd==0 && nh>=2)
     	{
     	printf("1 month and %d hours\n",nh);
     	}	
     else if(ny==0 && nm==1 && nd==1 && nh==0)
     	{
     	printf("1 month and 1 day\n");
     	}	
     else if(ny==0 && nm==1 && nd==1 && nh==1)
     	{
     	printf("1 month 1 day and 1 hour\n");
     	}	
     else if(ny==0 && nm==1 && nd==1 && nh>=2)
     	{
     	printf("1 month 1 day and %d hours\n",nh);
     	}	
     else if(ny==0 && nm==1 && nd>=2 && nh==0)
     	{
     	printf("1 month and %d days\n",nd);
     	}	
     else if(ny==0 && nm==1 && nd>=2 && nh==1)
     	{
     	printf("1 month %d days and 1 day\n",nd);
     	}	
     else if(ny==0 && nm==1 && nd>=2 && nh>=2)
     	{
     	printf("1 month %d days and %d hours\n",nd,nh);
     	}	
     else if(ny==0 && nm>=2 && nd==0 && nh==0)
     	{
     	printf("%d months\n",nm);
     	}	
      else if(ny==0 && nm>=2 && nd==0 && nh==1)
     	{
     	printf("%d months and 1 hour\n",nm);
     	}	
     else if(ny==0 && nm>=2 && nd==0 && nh>=2)
     	{
     	printf("%d months and %d hours\n",nm,nh);
     	}	
     else if(ny==0 && nm>=2 && nd==1 && nh==0)
     	{
     	printf("%d months and 1 day\n",nm);
     	}	
     else if(ny==0 && nm>=2 && nd==1 && nh==1)
     	{
     	printf("%d months 1 day and 1 hour\n",nm);
     	}	
     else if(ny==0 && nm>=2 && nd==1 && nh>=2)
     	{
     	printf("%d months 1 day and %d hours\n",nm,nh);
     	}	
     else if(ny==0 && nm>=2 && nd>=2 && nh==0)
     	{
     	printf("%d months and %d days\n",nm,nd);
     	}	
     else if(ny==0 && nm>=2 && nd>=2 && nh==1)
     	{
     	printf("%d months %d days and 1 hour\n",nm,nd);
     	}	
     else if(ny==0 && nm>=2 && nd>=2 && nh>=2)
     	{
     	printf("%d months %d days and %d hours\n",nm,nd,nh);
     	}
     else if(ny==1 && nm==0 && nd==0 && nh==0)
     	{
     	printf("1 year\n");
     	}	
     else if(ny==1 && nm==0 && nd==0 && nh==1)
     	{
     	printf("1 year and 1 hour\n");
     	}	
     else if(ny==1 && nm==0 && nd==0 && nh>=2)
     	{
     	printf("1 year and %d hours\n",nh);
     	}	
     else if(ny==1 && nm==0 && nd==1 && nh==0)
     	{
     	printf("1 year and 1 day\n");
     	}	
     else if(ny==1 && nm==0 && nd==1 && nh==1)
     	{
     	printf("1 year 1 day and 1 hour\n");
     	}	
     else if(ny==1 && nm==0 && nd==1 && nh>=2)
     	{
     	printf("1 year 1 day and %d hours\n",nh);
     	}	
     else if(ny==1 && nm==0 && nd>=2 && nh==0)
     	{
     	printf("1 year and %d days\n",nd);
     	}	
     else if(ny==1 && nm==0 && nd>=2 && nh==1)
     	{
     	printf("1 year %d days and 1 hour\n",nd);
     	}	
     else if(ny==1 && nm==0 && nd>=2 && nh>=2)
     	{
     	printf("1 year %d days and %d hours\n",nd,nh);
     	}	
     else if(ny==1 && nm==1 && nd>=0 && nh==0)
     	{
     	printf("1 year and 1 month\n");
     	}	
     else if(ny==1 && nm==1 && nd==0 && nh==1)
     	{
     	printf("1 year 1 month and 1 hour\n");
     	}	
     else if(ny==1 && nm==1 && nd==0 && nh>=2)
     	{
     	printf("1 year 1 month and %d hours\n",nh);
     	}	
     else if(ny==1 && nm==1 && nd==1 && nh==0)
     	{
     	printf("1 year 1 month and 1 day\n");
     	}	
     else if(ny==1 && nm==1 && nd==1 && nh==1)
     	{
     	printf("1 year 1 month 1 day and 1 hour\n");
     	}	
     else if(ny==1 && nm==1 && nd==1 && nh>=2)
     	{
     	printf("1 year 1 month 1 day and %d hours\n",nh);
     	}	
     else if(ny==1 && nm==1 && nd>=2 && nh==0)
     	{
     	printf("1 year 1 month and %d days\n",nd);
     	}	
     else if(ny==1 && nm==1 && nd>=2 && nh==1)
     	{
     	printf("1 year 1 month %d days and 1 day\n",nd);
     	}	
     else if(ny==1 && nm==1 && nd>=2 && nh>=2)
     	{
     	printf("1 year 1 month %d days and %d hours\n",nd,nh);
     	}	
     else if(ny==1 && nm>=2 && nd==0 && nh==0)
     	{
     	printf("1 year %d months\n",nm);
     	}	
     else if(ny==1 && nm>=2 && nd==0 && nh==1)
     	{
     	printf("1 year %d months and 1 hour\n",nm);
     	}	
     else if(ny==1 && nm>=2 && nd==0 && nh>=2)
     	{
     	printf("1 year %d months and %d hours\n",nm,nh);
     	}	
     else if(ny==1 && nm>=2 && nd==1 && nh==0)
     	{
     	printf("1 year %d months and 1 day\n",nm);
     	}	
     else if(ny==1 && nm>=2 && nd==1 && nh==1)
     	{
     	printf("1 year %d months 1 day and 1 hour\n",nm);
     	}	
     else if(ny==1 && nm>=2 && nd==1 && nh>=2)
     	{
     	printf("1 year %d months 1 day and %d hours\n",nm,nh);
     	}	
     else if(ny==1 && nm>=2 && nd>=2 && nh==0)
     	{
     	printf("1 year %d months and %d days\n",nm,nd);
     	}	
     else if(ny==1 && nm>=2 && nd>=2 && nh==1)
     	{
     	printf("1 year %d months %d days and 1 hour\n",nm,nd);
     	}	
     else if(ny==1 && nm>=2 && nd>=2 && nh>=2)
     	{
     	printf("1 year %d months %d days and %d hours\n",nm,nd,nh);
     	}
     else if(ny>=2 && nm==0 && nd==0 && nh==0)
     	{
     	printf("%d years\n",ny);
     	}	
     else if(ny>=2 && nm==0 && nd==0 && nh==1)
     	{
     	printf("%d years and 1 hour\n",ny);
     	}	
     else if(ny>=2 && nm==0 && nd==0 && nh>=2)
     	{
     	printf("%d years and %d hours\n",ny,nh);
     	}	
     else if(ny>=2 && nm==0 && nd==1 && nh==0)
     	{
     	printf("%d years and 1 day\n",ny);
     	}	
     else if(ny>=2 && nm==0 && nd==1 && nh==1)
     	{
     	printf("%d years 1 day and 1 hour\n",ny);
     	}	
     else if(ny>=2 && nm==0 && nd==1 && nh>=2)
     	{
     	printf("%d years 1 day and %d hours\n",ny,nh);
     	}	
     else if(ny>=2 && nm==0 && nd>=2 && nh==0)
     	{
     	printf("%d years and %d days\n",ny,nd);
     	}	
     else if(ny>=2 && nm==0 && nd>=2 && nh==1)
     	{
     	printf("%d years %d days and 1 hour\n",ny,nd);
     	}	
     else if(ny>=2 && nm==0 && nd>=2 && nh>=2)
     	{
     	printf("%d years %d days and %d hours\n",ny,nd,nh);
     	}	
     else if(ny>=2 && nm==1 && nd>=0 && nh==0)
     	{
     	printf("%d years and 1 month\n",ny);
     	}	
     else if(ny>=2 && nm==1 && nd==0 && nh==1)
     	{
     	printf("%d years 1 month and 1 hour\n",ny);
     	}	
     else if(ny>=2 && nm==1 && nd==0 && nh>=2)
     	{
     	printf("%d years 1 month and %d hours\n",ny,nh);
     	}	
     else if(ny>=2 && nm==1 && nd==1 && nh==0)
     	{
     	printf("%d years 1 month and 1 day\n",ny);
     	}	
     else if(ny>=2 && nm==1 && nd==1 && nh==1)
     	{
     	printf("%d years 1 month 1 day and 1 hour\n",ny);
     	}	
     else if(ny>=2 && nm==1 && nd==1 && nh>=2)
     	{
     	printf("%d years 1 month 1 day and %d hours\n",ny,nh);
     	}	
     else if(ny>=2 && nm==1 && nd>=2 && nh==0)
     	{
     	printf("%d years 1 month and %d days\n",ny,nd);
     	}	
     else if(ny>=2 && nm==1 && nd>=2 && nh==1)
     	{
     	printf("%d years 1 month %d days and 1 day\n",ny,nd);
     	}	
     else if(ny>=2 && nm==1 && nd>=2 && nh>=2)
     	{
     	printf("%d years 1 month %d days and %d hours\n",ny,nd,nh);
     	}	
     else if(ny>=2 && nm>=2 && nd==0 && nh==0)
     	{
     	printf("%d years %d months\n",ny,nm);
     	}	
      else if(ny>=2 && nm>=2 && nd==0 && nh==1)
     	{
     	printf("%d years %d months and 1 hour\n",ny,nm);
     	}	
     else if(ny>=2 && nm>=2 && nd==0 && nh>=2)
     	{
     	printf("%d years %d months and %d hours\n",ny,nm,nh);
     	}	
     else if(ny>=2 && nm>=2 && nd==1 && nh==0)
     	{
     	printf("%d years %d months and 1 day\n",ny,nm);
     	}	
     else if(ny>=2 && nm>=2 && nd==1 && nh==1)
     	{
     	printf("%d years %d months 1 day and 1 hour\n",ny,nm);
     	}	
     else if(ny>=2 && nm>=2 && nd==1 && nh>=2)
     	{
     	printf("%d years %d months 1 day and %d hours\n",ny,nm,nh);
     	}	
     else if(ny>=2 && nm>=2 && nd>=2 && nh==0)
     	{
     	printf("%d years %d months and %d days\n",ny,nm,nd);
     	}	
     else if(ny>=2 && nm>=2 && nd>=2 && nh==1)
     	{
     	printf("%d years %d months %d days and 1 hour\n",ny,nm,nd);
     	}	
     else if(ny>=2 && nm>=2 && nd>=2 && nh>=2)
     	{
     	printf("%d years %d months %d days and %d hours\n",ny,nm,nd,nh);
     	}
        return 0;
        }
