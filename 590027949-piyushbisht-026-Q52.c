#include <stdio.h>

int main() {
    int i, j;

    int count = 1;    
    int inc = 2;       


    for(i = 1; i <= 5; i++) {


        for(j = 1; j <= count; j++) {
            printf("*\n");
        }

        printf("\n"); 
        
        if(count == 5) {
            inc = -2;
        }

        count += inc; 
    }

    return 0;
}
