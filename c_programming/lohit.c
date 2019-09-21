#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter the size of letter:  ");
    
    int a,b,c,count1,count;
    scanf("%d",&a);
    count1=0;
    count=0;
    b=a*2;
    printf("\n\n");
    
    //for typing L;
    while(count1<b)
    {              
                     count=0;
                     while(count<a){
                                     printf("L");
                                     count++;
                                     }
                     printf("\n");
                     count1++;
    }
    count1=0;
    while(count1<a)
    {              
                     count=0;
                     while(count<b*2){
                                     printf("L");
                                     count++;
                                     }
                     printf("\n");
                     count1++;
    }
    count=0;
    while(count<a)
           {printf("\n");
            count++;
           }
           
    //for writting O;
    count=0;
    
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("O");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                   }
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf("O");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf("O");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   }
    
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("O");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                   }
    count=0;
    while(count<a)
           {printf("\n");
            count++;
           }               
    //to print H;
     count=0;
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf("H");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf("H");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   }
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("H");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                   }
    
     count=0;
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf("H");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf("H");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   }
                   
    count=0;
    while(count<a)
           {printf("\n");
            count++;
           }
    //TO PRINT I
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("I");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                   }
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf("I");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   }               
                   
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("I");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                   }
    count=0;
    while(count<a)
           {printf("\n");
            count++;
           }
           
           
    //TO PRINT T
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a*4){
                                     printf("T");
                                     count1++;
                                     }
                   printf("\n");
                   count++;
                 }
                 
    count=0;
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf("T");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   } 
    count=0;               
    while(count<a){
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a*2){
                                   printf("T");
                                   count1++;
                                   }
                   count1=0;
                   while(count1<a){
                                   printf(" ");
                                   count1++;
                                   }
                   printf("\n");
                   count++;
                   } 
    
    
    
    
    
    getch();
    return 0;
    }
