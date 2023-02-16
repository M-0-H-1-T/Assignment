#include <stdio.h> 
#include <math.h> 

float sinx(float x); 

int main() 
{ 
  int i; 
  float res, check, err; 
  for (i = 0; i <= 180; i = i + 15) { 
    res = sinx(i * (22 / (float)7) / 180); 
    check = sin(i * (22 / (float)7) / 180); 
    err = ((res - check) / check) * 100; 
    printf("The value of sin(%d) is %f.The error is %f\n", i, res, err); 
  } 
  return 0; 
} 

float sinx(float x) 
{ 
  float sinx, term; 
  int i = 1; 
  sinx = x; 
  do { 
    term = (-1) * x * x / (i * (i + 1)); 
    sinx = sinx + term; 
    i = i + 2; 
    term = (-1) * x * x / (i * (i + 1)); 
    sinx = sinx + term; 
    i = i + 2; 
  } while (term > 0.0001); 
  return sinx; 
} 
/*Output: The value of sin(0) is 0.000000.The error is -2.058794
The value of sin(15) is 0.258819.The error is 0.009544
The value of sin(30) is 0.500000.The error is 0.000075
The value of sin(45) is 0.707107.The error = -0.001068
The value of sin(60) is 0.866025.The error = -0.000261
The value of sin(75) is 0.965926.The error = 0.000001
The value of sin(90) is 1.000000.The error = 0.000000
The value of sin(105) is 0.965926.The error = -0.000001
The value of sin(120) is 0.866025.The error = 0.000261
The value of sin(135) is 0.707107.The error = 0.001068
The value of sin(150) is 0.500000.The error = -0.000075
The value of sin(165) is 0.258819.The error = -0.009544
The value of sin(180) is 0.000000.The error = 2.058795*/
