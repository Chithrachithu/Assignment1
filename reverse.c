#include<stdio.h>
#deffine size 30
int main()
{
int a[size],i,j,num,temp;
printf("enter the no. of elements");
scanf("%d",&num);
printf("enter ele");
for(i=0;i<num;i++)
{
scanf("%d",&a[i]);
}
j=i-1;
i=0;
while(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
i++;
j--;
}
printf("resultant array elements are");
for(i=0;i<num;i++)
{
printf("%d\t",a[i]);
}
}
