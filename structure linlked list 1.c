#include<stdio.h>
#include<stdlib.h>

struct dial {
    int num;
    struct dial *nxt;
};

int main() {
    struct dial *num1 = (struct dial*)malloc(sizeof(struct dial));
    struct dial *num2 = (struct dial*)malloc(sizeof(struct dial));
    struct dial *num3 = (struct dial*)malloc(sizeof(struct dial));

    
    scanf("%d, %d, %d", &num1->num, &num2->num, &num3->num);
   

   
    num1->nxt = num2;
    num2->nxt = num3;
    num3->nxt = NULL;

    struct dial *head = num1;

    
    while (head != NULL) {
        printf("%ld->", head->num);
        head = head->nxt;
    }
    printf("NULL");

    return 0;
}