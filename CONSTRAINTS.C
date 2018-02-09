#include<stdio.h>
int main()
{
int a[50],i,j,n,m;
printf("Enter the number");
scanf("%d",&n);
 printf("enter the array elements");
 for(i=0;i<=n;i++)
  scanf("%d",&i);
for(i=0;i<=n-1;i++)
{
for(j=i+1;j<=n;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
 }
  }
  }
  if(n%2==0)
  {
 m=n/2;
  printf("The sorted array is...%d",a[m]);
}
return 0;
}
