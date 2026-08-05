 #include<stdio.h>
  2 int main()
  3 {
  4    int m1,m2,m3,m4,avg,total;
  5    printf("enter mark1:");
  6    scanf("%d",&m1);
  7    printf("enter mark2 :");
  8    scanf("%d",&m2);
  9    printf("enter mark3:");
 10    scanf("%d",&m3);
 11    printf("enter mark4:");
 12    scanf("%d",&m4);
 13    total=m1+m1+m3+m4;
 14    avg=total/4;
 15    printf("total:%d \n\n average: %d",total,avg);
 16    if(avg>=80 && avg<=100)
 17     {
 18       printf("good\n");
 19     }
 20    else if(avg>=60&& avg<=79)
 21      {
 22       printf("average\n");
 23      }
 24    else if(avg>=40 &&avg<=59)
 25      {
 26       printf("fair\n");
 27      }
 28    else if (avg<40)
 29    {
    printf("fail\n");
 31    }
 32    return 0;
 33 }
      
