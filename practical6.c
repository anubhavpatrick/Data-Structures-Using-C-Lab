/* A program to add two matrices and b and store the result in third matrix c */
#include<stdio.h>
int main()
{
     int i,j,m,n,a[100][100],b[100][100],c[100][100];
     printf("Enter rows m and columns n of matrix a and b\n");
     scanf("%d%d",&m,&n);
     printf("Enter the elements of matrix a\n");
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&a[i][j]);
          }
     }
     printf("Enter the elements of matrix b\n");
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&b[i][j]);
          }
     }
     /*Adding a and b in c*/
     for(i=0;i<m;i++)
     {/*Number of rows in c*/
          for(j=0;j<n;j++)
          {/*Number of columns in c*/
               c[i][j]=a[i][j]+b[i][j];
          }
     }
     printf("Matrix c is\n");
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               printf("%d\t",c[i][j]);
          }
          printf("\n");
     }
}
