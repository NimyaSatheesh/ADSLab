#include<stdio.h>
int main()
{
int a[50],b[50],c[50],n,i,j,m,temp,temp1,temp2;
printf("enter the no of elements in first array : ");
scanf("%d",&n);
printf("enter the no of elements in second array :");
scanf("%d",&m);
printf("enter the elements into the first array : ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elements into the second array : ");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
}
printf("First array sorted\n");
for(i=0;i<n;i++)
printf("%3d",a[i]);
for(i=0;i<m;i++)
{
    for(j=i+1;j<m;j++)
    {
    if(b[i]>b[j])
    {
        temp1=b[i];
        b[i]=b[j];
        b[j]=temp1;
    }
    }
}
printf("\nSecond array sorted\n");
for(i=0;i<m;i++)
{
    printf("%3d",b[i]);
}
for(i=0;i<n;i++)
{
    c[i]=a[i];
}
int k=m+n;
for(i=0,j=n;j<k&&i<m;i++,j++)
{
    c[j]=b[i];
}
for(i=0;i<k;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(c[i]>c[j])
        {
            temp2=c[i];
            c[i]=c[j];
            c[j]=temp2;
        }
    }
}
printf("\narrays elemnts after merging\n");
for(i=0;i<k;i++)
{
    printf("%3d",c[i]);
}
}
