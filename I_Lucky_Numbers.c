#include <stdio.h>
    int main(){

    int n;
    scanf("%d",&n);
    int d =n/10;
    int r =n%10;
    if(d==0||r==0){
        printf("NO");
    }
   else if(d%r==0||r%d==0){
        printf("YES");
    }
    else {
       printf("NO");
    }
     return 0;


    }