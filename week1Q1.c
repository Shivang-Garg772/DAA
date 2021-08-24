#include <stdio.h>

int main()
{
    int n,i,c,na,ar[50],t,count,a;
    scanf("%d",&na);
    while(na!=0)
    {
        a=0;
        count=0;
        na--;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
        printf("\n");
        scanf("%d",&t);
        for(i=0;i<n;i++)
        {
            count++;
            if(ar[i]==t)
            {
                a=1;
                printf("Present %d",count);
                continue;
            }
        }
        if(a!=1)
        printf("\n Not present %d",count);
    }

    return 0;
}
