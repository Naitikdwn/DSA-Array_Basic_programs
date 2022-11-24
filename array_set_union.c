#include<stdio.h>
int main(){
          int n,m,i,j;
          printf("Enter the size of both the sets\n");
          scanf("%d%d",&n,&m);
          int a[n],b[m];
          printf("Emter the elements of 1st array\n");
          for( i=0;i<n;i++)
          {
                    scanf("%d",&a[i]);
          }
          printf("Emter the elements of 2nd array\n");
          for( i=0;i<m;i++)
          {
                    scanf("%d",&b[i]);
          }
          i=0,j=0;
          while(i<n&&j<m)
          {
                    if(a[i]<b[j])
                    printf("%d",a[i++]);
                   else  if(a[i]>b[j])
                   {
                    printf("%d\n",a[j++]);
                   }
                    else
                    {
                    printf("%d\n",a[i++]);
                    j++;
                    }
          }
          while(i<n)
          {
                    printf("%d\n",a[i++]);
          }
          
          while(j<m)
          {
                    printf("%d\n",b[j++]);
          }
          




          return 0;
}