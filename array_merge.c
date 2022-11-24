#include<stdio.h>
#include<stdlib.h>
int main(){
          int n,m;
          printf("Enter the size of 1st array\n");
          scanf("%d",&n);
          int l=n;
          printf("Enter the size of 2nd array\n");
          scanf("%d",&m);
          int a[n],b[m];
          int p[100];
          printf("Enter the elements of 1st array\n");
          for(int i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);

          }
          printf("Enter the elements of 2nd array\n");
          for(int i=0;i<m;i++)
          {
                    scanf("%d",&b[i]);

          }
          for(int i=0;i<n;i++)
          {
                    p[i]=a[i];
          }
          for(int i=0;i<m;i++)
          {
                    p[n]=b[i];
                    n++;
          }
          printf("The merged array is\n");
          for(int i=0;i<(m+l);i++)
          {
                    printf("%d\n",p[i]);
          }
          


          return 0;
}