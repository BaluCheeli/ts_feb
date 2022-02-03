#include <stdio.h>
int main()
{
char str1[100],str2[100],i,j;
printf("enter the string1 \n");
scanf("%s",&str1);
printf("enter the string2 \n");
scanf("%s",&str2);
for(i=0;str1[i]!='\0';++i);

for(j=0;str2[j]!='\0';++j,++i)
{
str1[i]=str2[j];
}
str1[i]='\0';
printf("th concatation  is %s\n",str1);
return 0;
}

