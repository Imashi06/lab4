#include<stdio.h>
int main()
{
    int counter=1, pricec=0,sum=0;
    float price,avg=0;
    while(counter<=10)
    {
        printf("Enter %d price",counter);
        scanf("%f",&price);

        if(price>200)
            pricec++;
        counter++;
    }
    sum=sum+price;
    avg=(float)sum/10.0;
    printf("The average of an item is %f",avg);
    printf("The count of prices greater than 200 is %d",pricec);
}
