#include<stdio.h>
int main()
{
int a[5]={1,2,4,5,6},b[5]={2,3,5,7};
int m=sizeof(a)/sizeof(a[0]);
int n=sizeof(b)/sizeof(b[0]);
intersection(a,b,m,n);
return 0;
}
int intersection(int a[],int b[],int m,int n)
{
int i=0,j=0;
while(i<m&&j<n)
{
if(a[i]<b[j])
i++;
elseif(b[j]<a[i])
j++;
else
{
printf("%d",b[j++]);
i++;
}
}
}

