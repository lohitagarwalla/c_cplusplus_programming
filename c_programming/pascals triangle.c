#include<stdio.h>
#include<conio.h>
int factorial(int, int);  // to calculate factorial
int combi(int, int, int);  // to calculalte combination
int main()
{
    int line, num, space;
    for(line=0;line<6;line++)  // for next line 
    {  
        for(space=1;space<6-line;space++)  // for printing space at the starting of every line
        printf("\t");
      
        for(num=line;num>=0;num--)   // for printing elements of a line
        {
            printf("%d\t\t",combi(line,num,1));
        }
        printf("\n\n\n");
    }
    
    getch();
    return 0;
}

int factorial(int a, int b)
{
    b=1;
    for( ;a>0;a--)
    {
         b=b*a;
    }
    return b;    
}


int combi(int n, int r, int ncr)
{
    ncr=factorial(n,1) / ( factorial(r,1) * factorial (n-r,1) );
    return ncr;
}

