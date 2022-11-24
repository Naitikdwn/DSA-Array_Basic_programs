#include<stdio.h>
 
 void deletion(int a[100],int n,int k)


{
          int x=a[k-1];
          for(int i=k;i<n;i++)
          {
                    a[i-1]=a[i];
          }
          n=n-1;
}
int main()
{
          int a[100],n,k,x;
          printf("Enter the size of array\n");
          {
                    scanf("%d",&n);
          }
          printf("Enter the array elements :\n");
          for(int i=0;i<n;i++)
          {
                 scanf("%d",&a[i]); 
          }
          printf("Enter the element position you want to delete\n");
          scanf("%d",&k);
          deletion(a,n,k);
          printf("Your array after deleltion of %d position elelment :\n",k);
          for(int i=0;i<n-1;i++)
          {
                    printf("%d\t",a[i]);
          }
       //   printf("Delelted element is %d ",x);
}