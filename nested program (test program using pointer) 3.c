v#include <stdio.h>
#include <stdlib.h>

struct Supplier {
    char supplier_name[30];
    char supplier_location[30];
};


struct Product {
    int product_id;
    char product_name[30];
    float product_price;
    struct Supplier sup;
};

int main() {
    struct Product *ptr;   

    
    ptr = (struct Product *)malloc(sizeof(struct Product));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

  
    printf("Enter Product ID: ");
    scanf("%d", &ptr->product_id);

    printf("Enter Product Name: ");
    scanf("%s", ptr->product_name);

    printf("Enter Product Price: ");
    scanf("%f", &ptr->product_price);

    printf("Enter Supplier Name: ");
    scanf("%s", ptr->sup.supplier_name);

    printf("Enter Supplier Location: ");
    scanf("%s", ptr->sup.supplier_location);

    
    printf("\n--- Product Details ---\n");
    printf("Product ID    : %d\n", ptr->product_id);
    printf("Product Name  : %s\n", ptr->product_name);
    printf("Product Price : %.2f\n", ptr->product_price);
    printf("Supplier Name : %s\n", ptr->sup.supplier_name);
    printf("Supplier Loc  : %s\n", ptr->sup.supplier_location);

    
    free(ptr);

    return 0;
}