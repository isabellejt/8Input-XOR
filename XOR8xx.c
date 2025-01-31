#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp [100];
    int y [100];
    int hasil [100];
    int total= 0;
    int out = 0;
    int i,j,k;

    for (i=0;i<8;i++)
    {
        printf("masukan input %d : ",i+1);
        scanf("%d",&inp[i]);
    }
    for (i=0;i<8;i++)
    {
        total+=inp[i];
    }

   
     for (i=0;i<8;i++)
   {
       if (total >=7)
        {
       for (j=0;j<8;j++)
       {
           y[j]=inp[j]*-1;
       }
       y[i]=8*inp[i];
       hasil[i]=0;
       for (j=0;j<8;j++)
       {
           printf("hasil %d y %d\n",hasil[i],y[j]);
           hasil[i]+=y[j];
       }
       }
        else if (total >=5)
        {
       for (j=0;j<8;j++)
       {
           y[j]=inp[j]*-1;
       }
       y[i]=6 * inp[i];
       hasil[i]=0;
       for (j=0;j<8;j++)
       {
           hasil[i]+=y[j];
       }
       }
        else if (total >=3)
        {
       for (j=0;j<8;j++)
       {
           y[j]=inp[j]*-1;
       }
       y[i]=4 * inp[i];
       hasil[i]=0;
       for (j=0;j<8;j++)
       {
           hasil[i]+=y[j];
       }
       }
       else {
         for (j=0;j<8;j++)
       {
           y[j]=inp[j]*-1;
       }
       y[i]=2 * inp[i];
       hasil[i]=0;
       for (j=0;j<8;j++)
       {
           hasil[i]+=y[j];
       }
       }
        printf("y %d %d\n", i, y[i]);
        printf("total %d\n", hasil[i]);
   }
  for(i=0;i<8;i++)
  {
      if (hasil[i]>= 2)
      {
          out =1;
      }
  }
  printf("Outputnya sama dengan : %d",out);


    return 0;
}
