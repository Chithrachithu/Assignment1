#include<stdio.h>
int main()
{
int a[10],n,i,j,key;
printf("enter n");
scanf("%d"&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key to search");
scanf("%d",&key);
pos=linear(key,a,n);
if(pos==1)
printf("item is not found");
else
printf("item is found");
}
int linear(int key,int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
if(key==a[i])
{
pos=0;
else
pos=1;
}
}
}

