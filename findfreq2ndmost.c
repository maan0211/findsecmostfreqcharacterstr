#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
char str[100];
int freq[256]={0};
int i,max=0,smax=0;
scanf("%s",str);
for (i=0;i<strlen(str);i++)
{
freq[str[i]]++;
}
for(i=0;i<256;i++)
{
if (freq[i]>freq[max])
{
smax = max;
max = i;
}
else if (freq[i]>freq[smax] && freq[i]!=freq[max])
{
smax=i;
}
}
if (smax==0)
{
printf("NO");
}
else
{
printf("%c",smax);
}
return 0;
}
