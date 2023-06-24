#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,counter=1,pcount=0,ncount=0,zcount=0;
    while(counter<=10)
    {
        printf("Enter %d number",counter);
        scanf("%d",&no);
        if(no<0)
            ncount++;
        else if(no>0)
            pcount++;
        else
            zcount++;
        counter++;
    }
    printf("The number of positives is %d",pcount);
    printf("The number of negatives is %d",ncount);
    printf("The number of zeros is %d",zcount);
}
