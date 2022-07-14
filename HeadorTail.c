#include <stdio.h>
#include <stdlib.h>

int main(){
    int head=0;
    int tail=0;
    int i,j=0;
    char name[20];
    printf("Who are you?>");
    scanf("%s",name);
    printf("Hello, %s!\n",name); 
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
    printf("Heads: %d, Tails: %d\n",head,tail);
    if(head>tail) printf("%s won\n",name);
    else printf("%s lost\n",name);
    return 0;
}