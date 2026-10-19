#include <stdio.h>
int main(){
int N;
scanf("%d",&N);
int max= 0;
for(int i=1;i<=N;i++){
    int mark;
    scanf("%d",&mark);
    if(mark>max){
        max = mark;
        
    }
   
}
 printf("%d ",max);
 

return 0;
}

