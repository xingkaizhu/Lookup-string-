#include<stdio.h>
#include<string.h>	
int findString(char stringArray[10][100],char *targetString,int n);
int main()
{
   char stringArray[10][100];char targetString[100];
	int i,j,n;
	scanf("%d",&n);
	while(getchar()!='\n')
	   continue;
	for(i=0;i<n;i++)
	gets(stringArray[i]);
	gets(targetString);
 j=findString( stringArray, targetString, n);
	printf("%d",j);
	return 0;
}
int findString(char stringArray[][100],char  *targetString,int n)
{     int k,l;
        l=0; 
	  for(k=0;k<n;k++)
	{  
		if((strcmp(stringArray[k],targetString))==0)
		l++;	
	}	
	return l;
}

