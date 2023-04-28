#include<stdio.h>

int arrayLength(int *x,int len,int len1){
    
    for(int i=0;i<len;i++){
        if(*x++ =='\0'){
            len1 = i;
            // printf("%d\n",i);
            break;
        }
        
    }
    return len1;
}

int main(){

    int EmpId[20]={'\0'};
    char EmpName[20][20];
    // char EmpName[20][20] = {
    //     "Yash",
    //     "Virat"
    // };
    float EmpSalary[20];
    int len = sizeof(EmpId)/sizeof(int);
    int *x;
    x=&EmpId;
    int op;
    // EmpId[0] = 1;
    // EmpId[1] = 2;
    // EmpId[2] ='\0';
    int len1=0;
    // for(int i=0;i<len;i++){
    //     if(EmpId[i]=='\0'){
    //         len1 = i;
    //         printf("%d\n",i);
    //         break;
    //     }
        
    // }
    len1 += arrayLength(x,len,len1);
    
    printf("start length:%d\n",len1);

    for(int i=len1;i<5;i++){  
        scanf("%d",&EmpId[i]);
        if(i==4){
            EmpId[i+1]='\0';
        }
    }
    len1+=arrayLength(x,len,len1);
    printf("%d\n",len1);

    // for(int i=0;i<len1;i++){  
    //     printf("%d",&EmpId[i]);
    // }
    // printf("%d",len1);
//     while (1)
//     {
//         /* code */
  
//     printf("1)Add Employee Details\n2)Show Employee Details\n3)exit\n");
//     scanf("%d",&op);
//     switch(op){

//         case 1:
//             printf("Add Employee:\n");
//             for(int i=0;i<2;i++){
//             scanf("%d %s %f",&EmpId[i],&EmpName[i],&EmpSalary[i]);
//                 }
//             break;
//         case 2:
//              printf("Employee Details:\n");
//             for(int i=0;i<2;i++){
//                 printf("ID:%d\nName:%s\nSalary:%.2f\n",EmpId[i],EmpName[i],EmpSalary[i]);
//                 }
//             break;
//         case 3:
//             printf("Thank You");
//             break;
//     }

//     // break;

//   }
    // printf("Add Employee:\n");
    // for(int i=0;i<2;i++){
    //     scanf("%d %s %f",&EmpId[i],&EmpName[i],&EmpSalary[i]);
    // }
    // printf("Employee Details:\n");
    // for(int i=0;i<2;i++){
    //     printf("ID:%d\nName:%s\nSalary:%.2f\n",EmpId[i],EmpName[i],EmpSalary[i]);
    // }
    // printf("%d",len);
int j=len1;
for(int i=0;i<3;i++){  
        scanf("%d",&EmpId[j]);
        if(i==2){
            EmpId[i+1]='\0';
        }
        j++;
    }
len1+=arrayLength(x,len,len1);
printf("%d",len1);
    return 0;
}