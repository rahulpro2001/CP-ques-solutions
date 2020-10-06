#include<stdio.h>
#include<math.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
        int n;
    scanf("%d",&n);
         int temp = n;
         int len = 0;

        while(temp != 0)
        {
            temp = temp/10;
            len++;
        }
        temp = n;
        int arr[len];
        int count = 0;
        for(int i = len-1;i>=0;i--){
            arr[i] = temp%10;
            temp = temp/10;
            if(arr[i]!=0)
            {
                count++;
            }
        }
        printf("%d",count);

        for(int i = 0;i<len;i++)
        {
            int var = len-i-1;
            if(arr[i]!=0)
            {
                printf("%d\n\n",arr[i]*pow(10,var));
            }
            }
            return 0;

  }
}
