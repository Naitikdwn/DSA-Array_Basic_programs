#include<stdio.h>
int main(){
          int n,m,p[60], k=0;
          printf("Enter the size of 1st and 2nd array\n");
          scanf("%d%d",&n,&m);
          int a[n],b[m];
            printf("Emter the elements of 1st array\n");
          for( int i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
          }
          printf("Emter the elements of 2nd array\n");
          for(  int i=0;i<m;i++)
          {
                    scanf("%d",&b[i]);
          }
          for(int i=0;i<n;i++)
          {
                    for(int j=0;j<m;j++)
                    {
                              if(a[i]==b[j])
                              {
                              p[k]=a[i];
                              k++;
                              break;
                              }
                    }
          }
          printf("THe intersection of two sets are:\n");
          printf("{ ");
          for(int i=0;i<k;i++)
          {
                    printf("%d,",p[i]);
          }
          printf(" }");
       
          

          return 0;
}