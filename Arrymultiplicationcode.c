#include <stdio.h>
int main()
{

  int a[10][10],b[10][10],c[10][10];
  int r1,r2,c1,c2;
  int i, j, k;

  printf("Enter rows and colums of first matrix:");
  scanf("%d%d",&r1,&c1);

  printf("Enter element of first matrix:\n");
  for(i=0;i<r1;i++)
  {
      for(j=0;i<c1;i++)
      {
          scanf("%d",&a[i][j]);
  }
}


printf("Enter rows and cloumns of second matrix:");
scanf("%d%d",&r2,&c2);

if(c1 !=r2)
{
    printf("Matrix multiplication is not possible.");
}
else
{
    printf("Enter elements of second matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;i<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;i<c2;j++)
        {
            c[i][j]=0;
        for(k=0;k<c1;k++)
{
              c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
  }
}
printf("Matrix product is:\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c2;i++)
    {
        printf("%d",c[i][j]);
    }
    printf("\n");
   }
}
return 0;
}
