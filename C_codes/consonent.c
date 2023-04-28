#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[] = "Hello,have a good day";
    char new_str[100];

    int j=0;
    int i;

    for(i=0;i<strlen(str);i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';
    printf("%s",new_str);
    return 0;
}    