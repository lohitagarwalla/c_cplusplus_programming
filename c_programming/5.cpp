#include<stdio.h>

int main()
{
          int a, n, b, c=0, i, j, k, count=0;
          
          scanf("%d",&a);
          
          for(i=0;i<a;i++)
          {
                          
                          scanf("%d",&n);
                          
                          
                          printf("*");
                          
                          for(j=2;n!=0;j++)
                          {
                    //                       while(n!=0)
 
                                           {
                                           for(k=2;k<j;k++)
                                           {
                                                               if((j/k)==0)
                                                               {
                                                                           c=1;
                                                                           
                                                               }
                                           }
                                           
                                           if(c!=1)
                                           {
                                                            if((n%j)==0)
                                                            {   
                                                                           while((n%j)==0)
                                                                           {
                                                                                          count++;
                                                                                          n=n/j;
                                                                           }
                                                                           printf("%d^e%d",j,count);
                                                            }  
                                           }
                                           c=0;
                                           count=0;
                                           }                                           
                          
                          }                                                   
                                              
          }
          
 return 0;
} 
