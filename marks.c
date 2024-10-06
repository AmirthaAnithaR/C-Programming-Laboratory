#include<stdio.h>
int main(){
    int eng,tam,math,soc,sci;
    scanf("%d %d %d %d %d",&eng,&tam,&math,&soc,&sci);
    float total=eng+tam+math+soc+sci;
    float avg=total/5.0;
    if((eng<0||eng>100)||(tam<0||tam>100)||(math<0||math>100)||(soc<0||soc>100)||(sci<0||sci>100))
    {
        printf("invalid ");
    }
    else if(eng<50||tam<50||math<50||soc<50||sci<50){
        printf("fail");
    }
    else if(eng>=50&&tam>=50&&math>=50&&soc>=50&&sci>=50){
        printf("pass\n");
        if(avg>=91&&avg<=100){
            printf("o grade");
        }
        else if(avg>=81&&avg<=90){
            printf("A+ grade");
        }
         else if(avg>=71&&avg<=80){
            printf("A grade");
        }
        else if(avg>=61&&avg<=70){
            printf("B+ grade");
        }
        else{
            printf("B grade");
        }
     
    
    }
        
    
    
}





