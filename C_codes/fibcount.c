#include<stdio.h>

int main(){

    // int i,sum,n=7,x=1,y=1;

    // printf("%d %d ",x,y);
    // for(i=1;i<n;i++){
    //     sum = x+y+1;
    //     printf("%d ",sum);
    //     x = y;
    //     y = sum;
    // }    

    // int a = 15;
    // int b = 16;
    // int c = 56;
    // printf("%d",a>b & c>b);


    for (int i = 0; i < 20; i++)
    {
       for (int j = 0; j < 10; j++)
       {
        if(j==6){
            break;
        }
        printf("%d *** value of j\n",j);
       }
       
       
        printf("%d * value of i\n",i);
    }
    


    return 0;
}