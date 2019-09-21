#include<stdio.h>
#include<conio.h>
int main()
{
  int star, space, line;
  //uppertriangle
  for(line=1;line<=4;line++)
  {
     for(space=1;space<=4-line;space++)
     printf(" ");
     
     for(star=1;star<=2*line-1;star++)
     printf("*");
     
     printf("\n");
  }
  // lower triangle
  for(line=1;line<4;line++)
  {
    for(space=1;space<=line;space++)
    printf(" ");
    
    for(star=1;star<2*(4-line);star++)
    printf("*");
    
    printf("\n");
  }

  
   

getch();
return 0;
}
