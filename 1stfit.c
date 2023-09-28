#include<stdio.h>
int  main()
{
    int b_size[10],p_size[10],b_no,p_no,flags[10],allocation[10],i,j;
    for(i=0;i<10;i++)
    {
        flags[i]=0;
        allocation[i]=-1;
    }
    printf("Enter no. number of blocks : ");
    scanf("%d",&b_no);
    printf("\nEnter size  of each blocks : ");
    for(i=0;i<b_no;i++)
    scanf("%d",&b_size[i]);
    printf("\nEnter number of processes: ");
    scanf("%d",p_no);
    printf("\nEnter size of each process: ");
    for(i=0;i<p_no;i++)
    scanf("%d",p_size[i]);
    for(i=0;i<p_no;i++)
    for(j=0;j<b_no;j++)
    if(flags[j]==0 && b_size[j]>=p_size[i])
    {
     allocation[j]=i;
        flags[j]=1;
        break;
    }
    //display allocation details
    printf("\nBlock no.\tSize\t\tProcess no.\tSize");
    for(i=0;i<b_no;i++)
     {
        printf("\n%d\t\t%d\t\t",i+1,b_size[i]);
        if(flags[i]==1)
          printf("%d\t\t%d",allocation[i]+1,p_size[allocation[i]]);
        else
          printf("Not allocated");
     }
     return 0;
}
