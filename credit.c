 #include<stdio.h>
  2 int main()
  3 {
  4    int account_no;
  5    int old_credit_limit,new_credit_limit,balance,amount_paid;
  6    printf("\n enter the acount no:");
  7    scanf("%d",& account_no);
  8    printf("\n enter the credit amount:");
  9    scanf("%d",& old_credit_limit);
 10    printf("\n enter paid amount:");
 11    scanf("%d",& amount_paid);
 12    balance=old_credit_limit-amount_paid;
 13    new_credit_limit=old_credit_limit/2;
 14    printf("\n account no: %d",account_no);
 15    printf("\n credit before recession: %d",old_credit_limit);
 16    printf("\n balance= %d",balance);
 17    printf("\n credit after recession= %d",new_credit_limit);
 18    if (balance<new_credit_limit)
 19    {
 20       printf("your balance exceeds the new credit limit");
 21    }
 22    else
 23    {
 24       printf("amount to pay %d",balance-new_credit_limit);
 25    }
 26    return 0;
 27 }
~
