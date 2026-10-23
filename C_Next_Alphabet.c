#include <stdio.h>
    int main(){

    char ch;
    scanf("%c",&ch);
    if(ch=='z'){
        
        printf("%c",'a');

    }
    else if(ch>='a'){
        ch=ch+1;
        printf("%c",ch);
    }

    return 0;

  }