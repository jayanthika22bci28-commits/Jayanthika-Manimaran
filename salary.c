 #include<stdio.h>
  2 int main()
  3 {
  4    int basic_pay,DA,HRA, allowance=1000, gross_salary;
  5    printf("enter the basic_ pay:");
  6    scanf("%d",& basic_pay);
  7    DA=basic_pay *0.5;
  8    HRA=basic_pay *0.1;
  9    gross_salary= basic_pay+DA+HRA+allowance;
 10    printf("\n basic pay=%d",basic_pay);
 11    printf("\n DA=%d HRA=%d allowance=%d",DA,HRA,allowance);
 12    printf("\n gross_salary=%d",gross_salary);
 13    return 0;
 14 }
