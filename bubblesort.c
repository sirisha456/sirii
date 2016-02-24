#include<stdio.h>
#define SIZE 7
void bubblesort();
int main()
{
int i,j,temp;
int arr[SIZE];
for(i=0;i<SIZE;i++)
{
printf("enter number:");
scanf("%d",&arr[i]);
}
for(i=0;i<SIZE;i++)
{
for(j=0;j<(SIZE-1)-i;j++)
{
if(arr[j]<arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
printf("%d\t",arr[j]);
}
return 0;
}

