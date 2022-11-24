#include<stdio.h>
int main(){
          int a[30],n,i,j;
          printf("Enter the size of array\n");
          scanf("%d",&n);
          for( i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
          }
          printf("The array after reversing is \n");
          for( j=i-1;j>=0;j--)
          {
             printf("%d\t",a[j]);
          }
          return 0;
}