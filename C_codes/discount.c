#include <stdio.h>
int main()
{
  int quantity,total_cost;

  printf("Enter quantity\n");
  scanf("%d",&quantity);
  total_cost = quantity*100;

  if(total_cost>1000){
    total_cost = total_cost-(.1*total_cost);
  }
  printf("Total cost is %d\n",total_cost);

  return 0;
}