#include<stdio.h>
#include<conio.h>
int  main()
{
   int i;
   char ch1[100],ch2[100];
   printf("enter 1st string ");
   gets(ch1);
   printf("enter 2nd string ");
   gets(ch2);
   // to check string length
   for(i=0;i<100;i++)
   {
     if(ch1[i]=='\0' && ch2[i]=='\0')
     {printf("string lengths are same\n");
     
 //fd    for()
     
     break;
     }else if(ch1[i]=='\0' && ch2[i]!='\0'){printf("string lengths are different");break;}
     else if(ch2[i]=='\0' && ch1[i]!='\0'){printf("string lengths are different");break;}
    // if(ch2[i]=='\0')
     //printf("string lengths are different");
   }
   getch();
   return 0;
}
