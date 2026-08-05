 1 #include<stdio.h>
  2 int main()
  3 {
  4    int n,i,sum=0;
  5    printf("enter no of elements:");
  6    scanf("%d",&n);
  7    int arr[n];
  8    printf("enter %d numbers:",n);
  9    for(i=0;i<n;i++)
 10    {
 11       scanf("%d",&arr[i]);
 12       sum+=arr[i];
 13    }
 14    printf("Total sum=%d\n",sum);
 15    return 0;
 16 }
~
