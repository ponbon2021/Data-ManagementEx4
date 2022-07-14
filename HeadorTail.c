#include <stdio.h>
#include <stdlib.h>

int main(){
    int head=0;
    int tail=0;
    int i,j=0;

    printf("Tossing a coin...\n");
        for(i=1;i<=3;i++){
            printf("Round %d:",i);
            j=rand()%2;
            if(j==0){
                head++;
                printf("Heads\n");
            }
            else if(j==1){
                tail++;
                printf("Tails\n");
            }
        }
    printf("Heads: %d, Tails: %d",head,tail);
    return 0;
}