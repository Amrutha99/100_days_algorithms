#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
int *arr=(int*)malloc(100*sizeof(int));
int key,size,i,j,flag=0;
printf("enter array size\n");
scanf("%d",&size);
//reading element of array with given size
printf("enter elements\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("enter key\n");
scanf("%d",&key);
//searching key element in the array
for(j=0;j<size;j++)
{
if(arr[j]==key)
{
flag=1;
break;
}
}
if(flag==1)
printf("key found\n");
else
printf("key not found\n");
getch();
return 0;
}
