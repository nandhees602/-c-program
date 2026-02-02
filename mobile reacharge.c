#include <stdio.h>

struct Recharge {
    long long mobileNumber;
    float amount;
};

int main() {
    struct Recharge r;

    r.mobileNumber = 123654987;
    r.amount = 299.0;

    printf("Mobile Recharge Details\n");
    printf("------------------------\n");
    printf("Mobile Number : %lld\n", r.mobileNumber);
    printf("Recharge Amount : %.2f\n", r.amount);

    return 0;
}