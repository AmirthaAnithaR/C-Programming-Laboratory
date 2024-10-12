#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("invalid input ");
    }
    else{
      int m=3*n*(n+1)/2;
      printf("%d",m);
    }
    return 0;
}


