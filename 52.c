#include <stdio.h>
#include<math.h>
void main()
{
    int i,j,k,l,m,n,p,a,b[10000];
    
    printf("Input :\n");
    scanf("%d%d",&a,&k);
    for(i=0;i<a;i++)
    scanf("%d",&b[i]);
    printf("Output :\n");
    
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
           if(b[j]>b[i])
          {
           m=b[i];
           b[i]=b[j];
           b[j]=m;
          }
        }
    }
   
    printf("%d ",b[k-1]);
    
  
}
