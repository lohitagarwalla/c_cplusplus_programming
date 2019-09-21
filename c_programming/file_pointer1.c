#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *lohit;
    lohit = fopen("exam.txt","a");
    if(lohit==NULL)
    {printf("Unable to open the file");}
    else{
          fprintf(lohit,"\ni am a fucking hero");
          printf("data written successfully");
          fclose(lohit);
          }
          
    
    getch();
    return 0;
}
