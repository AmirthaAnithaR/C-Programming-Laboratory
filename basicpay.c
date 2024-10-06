#include<stdio.h>
int main()
{
    float pay;
    scanf("%f",&pay);
    float bonus;
    float travelallowance;
    if(pay>0&&pay<=10000){
        bonus=(2.0/100.0)*pay;
        travelallowance=(1.0/100.0)*pay;
    
    }
    else if(pay>10001&&pay<=25000)
    {
        bonus=(5.0/100.0)*pay;
        travelallowance=(2.0/100.0)*pay;
        
    }
    else if(pay>25000&&pay<=50000)
    {
        bonus=(10.0/100.0)*pay;
        travelallowance=(3.0/100.0)*pay;
        
    }
    else if(pay>50001&&pay<=100000)
    {
        bonus=(15.0/100.0)*pay;
        travelallowance=(4.0/100.0)*pay;
        
    }
    else{ 
        bonus=(20.0/100.0)*pay;
        travelallowance=(5.0/100.0)*pay;
        
    }
    printf("%f\n",bonus);
    printf("%f\n",travelallowance);
    
    return 0;
}

