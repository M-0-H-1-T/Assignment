#include<stdio.h>
#include<math.h>
void main()
{
 int r;

 float perimeter,area,volume;

 printf("\nEnter the radius");

 scanf("%d",&r);

 perimeter=2*3.14*r;

 area=3.14*r*r;

 volume=4/3*3.14*r + r;

 printf("\n Perimeter of the circle is %f \n Area of the circle is %f \n Volume of the sphere is %f ",perimeter,area,volume);
}
