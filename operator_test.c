#include <stdio.h>
int main(){
    int i = 3, j = 5;
    if((i = 0) && (j = 4)){
        printf("%d", i);
        printf("%d", j);
    }
    else{
        printf("false");
        printf("%d", i);
        printf("%d", j);
    }
}