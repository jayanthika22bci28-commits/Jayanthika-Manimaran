 1 #include<stdio.h>
  2 int main()
  3 {
  4    int n,i,sum=0;
  5    float average;
  6    printf("enter the elements:");
  7    scanf("%d",&n);
  8    int arr[n];
  9    printf("enter the %d numbers:",n);
 10    for(i=0;i<n;i++)
 11    {
 12       scanf("%d",&arr[i]);
 13       sum+=arr[i];
 14    }
 15    printf("Total sum=%d\n",sum);
 16    average=(float)sum/n;
 17    printf("average=%.2f\n",average);
 18    return 0;
 19 }
