#include <stdio.h>

    int main(){
        int num, i, j;

        scanf("%d", &num);
        for(i=0; i<num; i++){

            for(j=0; j<num-i; j++)
                printf("%c ", j+65);
        
            printf("\n");
        }
    }