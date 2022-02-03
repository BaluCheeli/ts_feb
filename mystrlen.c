#include<stdio.h>
#include<string.h>
void mylen(char []);
int main()
{
	char str[100];
	int i,c=0;
	printf("enter the string to count\n");
	scanf("%s",str);
	mylen(str);
	
	return 0;
}

void mylen(char str[])
{
    int c=0;
    for(int i=1;str[i]!='\0';i++)
{
		c++;
}	
printf("the string length is %d",c+1);

}
