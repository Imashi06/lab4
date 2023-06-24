#include<stdio.h>
int main()
{

    int m,max,mini,counter=1,sum=0;
    float avg=0;
    while(counter<=10)
    {
        printf("Enter the mark");
        scanf("%d",&m);
        mini=0;
        max=0;

        if (m>max)
            max=m;
        else if (m<mini)
            mini=m;

        scanf("%d",&m);
        counter++;
    }
    sum=sum+m;
    avg= 1.0*sum;
    printf("The average is %.2f",avg);
    printf("The maximum number is %d",max);
    printf("The minimum number is %d",mini);

}
