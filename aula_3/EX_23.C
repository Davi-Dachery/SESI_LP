#include <stdio.h>

void main(){
    printf("Numeros entre 1 e 100 divisiveis por 3 e 5: \n");

    for (int i = 1; i <= 100; i = i + 1){
        
       
        if (i % 3 == 0 && i % 5 == 0){
            printf("%i e divisivel por 3 e 5 \n", i);
        }
    }
}