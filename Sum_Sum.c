#include <stdio.h>
    int main(){

     int n;
     int x;
     int sum1=0;
     int sum2=0;
     scanf("%d",&n);
     for(int i=1;i<=n;i++){
         scanf("%d",&x);
         if(x>0){
             sum1+=x;
         }
         else{
             sum2+=x;
         }
     }
        printf("%d %d ",sum1,sum2);
     return 0;


    }