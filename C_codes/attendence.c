#include <stdio.h>
int main()
{
  int num_of_held,num_of_atten;
  printf("Total number of classes held and attended?\n");
  scanf("%d %d",&num_of_held, &num_of_atten);
  float per = (num_of_atten/(float)num_of_held)*100;
  printf("You have attended %f of total classes\n",per);
  if(per>=75){
    printf("Yes, you are allowed\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}