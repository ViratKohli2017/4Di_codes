#include<stdio.h>


int main(){

    int arr[10]={5,8,-5,-7,38};

    // printf("Enter numbers: ");
    // for(int i=0;i<10;i++){
    //     scanf("%d",&arr[i]);
    // }
    int positive=0;
    int negative=0;
    int zeros=0;
    int pos[];

    printf("array");
    for(int i=0;i<10;i++){
        
        if(arr[i]==0){
            // printf("0 %d",arr[i]);
            zeros = zeros + 1;
        }
        else if(arr[i]<0){
            //  printf("%d",arr[i]);
            negative = negative +1;
        }
        else if(arr[i]>0){
            //  printf("%d",arr[i]);
            positive = positive+1;
            .......................
        }
    }
    printf("Number of Zeros %d\n",zeros);
    printf("Number of negative %d\n",negative);
    printf("Number of positive %d\n",positive);



    return 0;
}