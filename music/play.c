#include<stdio.h>
main(int argc, char *argv[])
    {
      if(argc==3)//print the given code only if argc=3//
      { 
      FILE *music;//It is used to scan the header file//
      int threshold,a,b,count;//Takes the value of threshold//  
      char token[30] = "";//It can take the maximum value of the token upto 29//
      threshold = atoi(argv[1]);

      music = fopen(argv[2],"r");
    while(strcmp(token,"%%")!=0)// Comparing the strings from RRAUDIO to "%%"
    {
        fscanf(music,"%s",token);
    }
    while(!feof(music))
    {
            fscanf(music,"%s",token);
              if(atoi(token)>=-(threshold) && atoi(token)<=+(threshold))//checking the samples if it is greater than or equal to -(threshold) to less than or equal to +(threshold)//
                count++;
              else//Then it fails//
                break;
    }
      fclose(music);//It is used to close the file//
      music = fopen(argv[2],"r");//Reopening the file//
        for(a=0;a<=4;a++)//It is used to scan the statements from RRAUDIO TO %%//   
        {
            fscanf(music,"%s",token);    
            if(a==0)
            {
              printf("%s\n",token); //print RRAUDIO//
            }
            else if(a==1 || a==3)
            {
             printf("%s",token);
             fscanf(music,"%s\n",token);// scan created by and modified by//
             printf("%s",token);//printing created by and modified by//
            }
            else if(a==2)
            {
                printf("%s",token);
                fscanf(music,"%s\n",token);
                printf("%015d",(atoi(token)-count));//Modifying the given samples//
            }
            else if(a==4)
            {
                printf("%s\n",token);//prints %%// 
        }
      for(b=0;b<count;b++)
            fscanf(music,"%s",token);//scans the samples//

      while(!feof(music))
            {
              printf("%s\n",token);
              fscanf(music,"%s",token);
            }
      fclose(music);//closing the file//
     }
     else
     {
      printf("Error\n");//It throws an error if the arguments are less than 3//
     }  
    }


