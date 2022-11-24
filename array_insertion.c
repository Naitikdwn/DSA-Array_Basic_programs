#include<stdio.h>
void insertion (int a[100],int n,int m,int l)
{
          for(int j=n-1;j>=m-1;j--)
          {
                    a[j+1]=a[j];
          }
          a[m-1]=l;
          n=n+1;
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
          printf("Enter the position you want to insert the element\n");
          scanf("%d",&m);
          printf("Enter the element you want to insert \n");
          scanf("%d",&l);

          insertion(a,n,m,l);
          printf("Your array after inserting the %d element on %d position :\n",l,m);
          for(int i=0;i<n+1;i++)
          {
                    printf("%d\n",a[i]);
          }
          
          return 0;
}