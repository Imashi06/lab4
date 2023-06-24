#include<stdio.h>
int main()
{
    int no,hours,counter=1,OTP,OTPcount=0,OTPsum=0;

    while(counter<4)
    {
        printf("Enter %d employee number",counter);
        scanf("%d",&no);
        printf("The hours worked by employee");
        scanf("%d",&hours);
        if(hours>40)
            OTP= hours*200;
        else
            OTP=hours*150;
        OTPsum++;
        if(OTP>4000)
            OTPcount++;
            counter++;
    }
    printf("The employee number is %d",no);
    printf("The Over Time Payment is %d",OTP);
    printf("Th count of the employees whose OTP exceeding the Rs.4000/- is %d",OTPcount);
}
