#include <stdio.h>
#include<stdlib.h>
struct cart{
    int items;
    struct cart *next ;
} ;
int main() {
struct cart*no1 = (struct cart*)malloc(sizeof(struct cart));
struct cart*no2 = (struct cart*)malloc(sizeof(struct cart));
struct cart*no3 = (struct cart*)malloc(sizeof(struct cart));
scanf("%d\n",&no1->items);
scanf("%d\n",&no2->items);
scanf("%d\n",&no3->items);
no3->next = no2;
no2->next = no1;
no1->next = NULL;
struct cart *head = no3;
while(head != NULL){
    printf("%d -> ",head->items);
    head = head->next;
}
printf("NULL");
    return 0;
}