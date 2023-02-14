#include<stdio.h> 
#include<math.h>    
int main() 
{ 
    float a, b, c;  
    float root1, root2, imaginary; 

    printf("Enter coefficients a, b and c: ");  
    scanf("%f%f%f", &a, &b, &c);  

    float determinant = b*b - 4*a*c; 

    if (determinant > 0) 
    { 
        root1 = (-b + sqrt(determinant)) / (2*a); 
        root2 = (-b - sqrt(determinant)) / (2*a); 

        printf("Two distinct and real roots exists: %.2f and %.2f", root1 , root2); 
    } else if (determinant == 0) { 

        root1 = root2 = -b / (2*a);  

        printf("Two equal and real roots exists: %.2f and %.2f", root1 , root2);  

    } else {  

        double realPart = -b / (2*a);  
        double imaginaryPart = sqrt(-determinant) / (2*a); 

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2ff",realPart , imaginaryPart,realPart , imaginaryPart );  
    } return 0;    
}
