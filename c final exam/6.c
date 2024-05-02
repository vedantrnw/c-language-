
#include <stdio.h>

// Define the structure for mobile details
struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

int main() {
    int N;

    // Prompt user to enter the number of mobiles
    printf("Enter the number of mobiles: ");
    scanf("%d", &N);

    // Declare an array of structures to store mobile details
    struct Mobile mobiles[N];

    // Input details for each mobile
    for (int i = 0; i < N; i++) {
        printf("\nEnter details for mobile %d:\n", i + 1);
        printf("Company Name: ");
        scanf("%s", mobiles[i].company_name);
        printf("Color: ");
        scanf("%s", mobiles[i].color);
        printf("Model: ");
        scanf("%s", mobiles[i].model);
        printf("Price: ");
        scanf("%f", &mobiles[i].price);
    }

    // Display the details of all mobiles
    printf("\n*Details of the mobiles:*\n");
    for (int i = 0; i < N; i++) {
        printf("\nMobile %d\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: $%.2f\n", mobiles[i].price);
    }

    return 0;
}