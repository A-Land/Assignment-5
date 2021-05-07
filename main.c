// Copyright 2021 Adam Landriault
#include <stdio.h>
int main(void) {
  printf("calculation of a circle\n");
  int circle_radius;
  float PI_VALUE = 3.14, circle_area, circle_circumf;
  // Allowing the user to input the radius value that they want to use.
    printf("\nEnter radius of circle: ");
  // Storing the user input into variable circle_radius
  scanf("%d", &circle_radius);
// Calculate and display Area
  circle_area = PI_VALUE * circle_radius * circle_radius;
  printf("\nArea of circle is: %f", circle_area);
  // calculate and display circumference
circle_circumf = 2 * PI_VALUE * circle_radius;
printf("\nCircumference of circle is: %f", circle_circumf);
  return 0;
}
