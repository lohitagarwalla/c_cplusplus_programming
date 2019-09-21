#include <stdio.h>
#include <string.h>

int main()
{
    char dict[10][50], temp[50];
    int i,j;
    for(i=0;i<10;i++)
    {
    	scanf("%s[^\n]",&dict[i]);
	}
    
    for(j=0;j<10;j++)
    {
        for(i = 0; i<9; i++)
        {
            if(strcmp(dict[i], dict[i+1])>0 )
            {
                strcpy(temp,dict[i]);
                strcpy(dict[i],dict[i+1]);
                strcpy(dict[i+1], temp);
            }
        }
    }
    for(i=0;i<10; i++)
    {
        printf("%s \n",dict[i]);
	}
    return 0;
}
