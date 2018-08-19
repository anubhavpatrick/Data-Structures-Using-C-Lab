
/* A program to multiply two matrices and b and store the result in third matrix c */
#include<stdio.h>
#include<stdlib.h>//for exit() function
int main()
{
     int i,j,m,n,o,p,a[100][100],b[100][100],c[100][100],k,sum;
     printf("Enter rows m and columns n of first matrix\n");
     scanf("%d%d",&m,&n);
     printf("Enter rows o and columns p of second matrix\n");
     scanf("%d%d",&o,&p);
     if(n!=o)
     {
           printf("Matrices can not be multiplied\n");
           exit(0);
     }
     printf("Enter the elements of matrix a\n");
     for(i=0;i<m;i++)
     {
          for(j=0;j<n;j++)
          {
               scanf("%d",&a[i][j]);
          }
     }
     printf("Enter the elements of matrix b\n");
     for(i=0;i<o;i++)
     {
          for(j=0;j<p;j++)
          {
               scanf("%d",&b[i][j]);
          }
     }
     /*Multiplying an and b in c*/
     for(i=0;i<m;i++)
     {/*Number of rows in c*/
          for(j=0;j<p;j++)
          {/*Number of columns in c*/
               sum=0;
               /*Finding the value of element present at ith row and jth column in c*/
               for(k=0;k<n;k++)
               {
                    sum=sum+(a[i][k]*b[k][j]);
               }
            c[i][j]=sum;
          }
     }
     printf("Matrix c is\n");
     for(i=0;i<m;i++)
     {
          for(j=0;j<p;j++)
          {
               printf("%d\t",c[i][j]);
          }
          printf("\n");
     }
}
