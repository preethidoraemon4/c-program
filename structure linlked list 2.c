#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    struct student *nxt;
};

int main() {
    struct student *s1 = (struct student*)malloc(sizeof(struct student));
    struct student *s2 = (struct student*)malloc(sizeof(struct student));

    
    scanf("%d %d", &s1->roll, &s2->roll);

    

   
    s1->nxt = s2;
    s2->nxt = NULL;

    struct student *head = s1;

    
    while (head != NULL) {
        printf("Roll %d->", head->roll);
        head = head->nxt;
    }
    printf(" NULL");

    return 0;
}