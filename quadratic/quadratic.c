#include<stdio.h>
#include<math.h>

void main(){
     float a,b,c, disc, root1, root2, real, img;
     printf("Enter the coefficients of the quadratic equation\n");
     scanf("%f %f %f", &a, &b, &c);
     disc = b*b - 4*a*c;

     if(disc>0){
        printf("The roots are real and unique\n");
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        printf("Root1 = %.2f \nRoot2 = %.2f\n", root1, root2);
     }
     else if(disc == 0){
        printf("The roots are equal\n");
        root1 = -b/(2*a);
        printf("Root1 = Root2 = %.2f\n", root1);
     }
     else{
        printf("Roots are real and imaginary\n");
        root1 = -b/(2*a);
        root2 = sqrt(-disc)/(2*a);
        printf("Root1 = %.2f + %.2fi \nRoot2 = %.2f - %.2fi\n", root1, root2, root1, root2);
     }


}