#include <stdio.h>

int main() {
    char name[50];
    int age;
    float height;
    float weight;
    char gender;
    char education[100];

    printf("Enter your Name: ");
    scanf("%s", name);   

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your gender: ");
    scanf(" %c", &gender);   
    printf("Enter your Education Qualification: ");
    scanf("%s", education);  

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("Gender: %c\n", gender);
    printf("Height: %.1f\n", height);
    printf("Weight: %.0f\n", weight);
    printf("Education: %s\n", education);

    return 0;
}
