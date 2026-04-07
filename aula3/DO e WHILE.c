#include <stdio.h>

void main(){
    for (int i=0; i < 5; i=i+1){
        printf("%i Bom Dia!\n", i);
    }
    
    int y =0;
    
    while(y < 5){
        printf("Boa Tarde!\n");
        y++;
    }
    
    int x=5;
    do{
        printf("%i Boa Noite! \n", x);
        x--;
    }while(x > 0);
}