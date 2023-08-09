#include<stdio.h>
#include <math.h>

 

int main() {

    int a, b,c , dis, root1, root2, realPart, imagPart;

    int choice;

    

    printf("Enter the coefficients a, b, and c: ");

    scanf("%d %d %d", &a, &b, &c);

    

    dis = b*b - 4*a*c;

    

    printf("Choose the method to calculate roots:\n");

    printf("1. Formula method\n");

    printf("2. Completing the square method\n");

    printf("3. Quadratic formula\n");

    scanf("%d", &choice);

    

    switch (choice) {

        case 1:

            if (dis > 0) {

                root1 = (-b + sqrt(dis)) / (2*a);

                root2 = (-b - sqrt(dis)) / (2*a);

                printf("Roots are real and different:\n");

                printf("Root1 = %.2lf\n", root1);

                printf("Root2 = %.2lf\n", root2);

            }

            else if (dis == 0) {

                root1 = root2 = -b / (2*a);

                printf("Roots are real and same:\n");

                printf("Root1 = Root2 = %.2lf\n", root1);

            }

            else {

                realPart = -b / (2*a);

                imagPart = sqrt(-dis) / (2*a);

                printf("Roots are complex and different:\n");

                printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);

                printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);

            }

            break;

            

        case 2:

            printf("Not implemented yet.\n");

            break;

            

        case 3:

            if (dis > 0) {

                root1 = (-b + sqrt(dis)) / (2*a);

                root2 = (-b - sqrt(dis)) / (2*a);

                printf("Roots are real and different:\n");

                printf("Root1 = %.2lf\n", root1);

                printf("Root2 = %.2lf\n", root2);

            }

            else if (dis == 0) {

                root1 = root2 = -b / (2*a);

                printf("Roots are real and same:\n");

                printf("Root1 = Root2 = %.2lf\n", root1);

            }

            else {

                realPart = -b / (2*a);

                imagPart = sqrt(-dis) / (2*a);

                printf("Roots are complex and different:\n");

                printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);

                printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);

            }

            break;

            

        default:

            printf("Invalid choice.\n");

    }

    

    return 0;

}
