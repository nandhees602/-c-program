#include <stdio.h>
#include <stdlib.h>
struct ContactDetails {
    long  phoneNumber;
};

struct Customer {
    int accountNumber;
    struct ContactDetails contact;
    struct Customer *next;
};

int main() {
   
    struct Customer *customer1 = (struct Customer *)malloc(sizeof(struct Customer));
    customer1->accountNumber = 101;
    customer1->contact.phoneNumber = 9876543210;
    customer1->next = NULL; 
  
    struct Customer *customer2 = (struct Customer *)malloc(sizeof(struct Customer));
    customer2->accountNumber = 102;
    customer2->contact.phoneNumber = 9123456789;
    customer2->next = NULL;

    
    customer1->next = customer2;
    struct Customer *current = customer1;
    while (current != NULL) {
        printf("%d - %lld", current->accountNumber, current->contact.phoneNumber);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next; // Move to the next node
    }
    printf(" -> NULL\n");

    
    return 0;
}