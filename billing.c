#include<stdio.h>
  2 int main()
  3 {
  4    int num_item=3;
  5    float price1,price2,price3,net_bill,discount,total_bill;
  6    printf("enter the price of item1:\n");
  7    scanf("%f",&price1);
  8    printf("enter the price of item2:\n");
  9    scanf("%f",&price2);
 10    printf("enter the price of item3:\n");
 11    scanf("%f",&price3);
 12    total_bill=price1+price2+price3;
 13    printf("\n the total net_bill is %f",total_bill);
 14    discount=total_bill*0.02;
 15    printf("\n the discount is %f",discount);
 16    net_bill=total_bill - discount;
 17    printf("\n net amount is %f\n",net_bill);
 18    return 0;
 19  }
