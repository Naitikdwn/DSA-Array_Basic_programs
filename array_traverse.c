#include<stdio.h>
void traverse (int a[100],int n)
{
          for(int j=0;j<n;j++)
          {
                    printf("%d\t",a[j]);
          }
          
}
int main(){
          int a[100],n,m,l;
          printf("Enter the size of array\n");
          scanf("%d",&n);
          printf("Enter the elements of array\n");
          for(int i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);

          }
          
          traverse(a,n);
          
          return 0;
}