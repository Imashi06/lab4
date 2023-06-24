#include<stdio.h>
int main()
{
    int no,bs,counter=1,bscount=0;
    while(counter<1000)
    {
        printf("Enter %d employee number",counter);
        scanf("%d",&no);
        printf("Enter the basic salary");
        scanf("%d",&bs);
        if(bs>=5000)
            bscount++;
            counter++;
    }
        printf("The count of the employees whose bs>=5000 is %d",bscount);

}
