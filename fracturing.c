#include <stdio.h>
#include <math.h>

//to compile try the following
//gcc /workspaces/fall-2024-cop-3223-assignment1/fracturing.c && ./a.out < fracture_inputs.txt
//gcc fracturing.c -lm && ./a.out

//declare all functions

double askForUserInput();
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();


//Call all functions
int main(int argc, char **argv)
{
  calculateDistance();
  calculatePerimeter();
  calculateArea();
  calculateWidth();
  calculateHeight();

  return 0;
}


double askForUserInput()
{
  double coordinate;
  scanf("%lf", &coordinate);
  return coordinate;
}


double calculateDistance()
{
  double x1,y1,x2,y2;
  printf("Enter x1 = ");
  x1 = askForUserInput();
  printf("Enter y1 = ");
  y1 = askForUserInput();
  printf("Enter x2 = ");
  x2 = askForUserInput();
  printf("Enter y2 = ");
  y2 = askForUserInput();
  printf("Point #1 entered: x1 = %lf; y1 =%lf\n", x1, y1);
  printf("Point #2 entered: x2 = %lf; y2 =%lf\n", x2, y2);
  double distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  
  printf("The distance between the two points is %lf\n", distance);
  return distance;
}

#define pi 3.14159 //pi defined as a constant 3.14159 to be called later

double calculatePerimeter()
{
  double distance = calculateDistance();
  double perimeter = distance * pi;
  printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
  //Return 2 for easy difficulty, 1 to 5 scale, easy to hard
  return 2.0;
}

double calculateArea()
{
  double distance = calculateDistance();
  double area = pow(distance,2) * pi * 1/4;
  printf("The area of the city encompassed by your request is %lf\n", area);
  //return 2 for easy difficulty
  return 2.0;
}

double calculateWidth()
{
  double x1,y1,x2,y2;
  printf("Enter x1 = ");
  x1 = askForUserInput();
  printf("Enter y1 = ");
  y1 = askForUserInput();
  printf("Enter x2 = ");
  x2 = askForUserInput();
  printf("Enter y2 = ");
  y2 = askForUserInput();
  double width = fabs(x2 - x1);
  
  printf("Point #1 entered: x1 = %lf; y1 =%lf\n", x1, y1);
  printf("Point #2 entered: x2 = %lf; y2 =%lf\n", x2, y2);
  printf("The width of the city encompassed by your request is %lf\n", width);
  //return 1 for easy difficulty
  return 1.0;
}

double calculateHeight()
{
  double x1,y1,x2,y2;
  printf("Enter x1 = ");
  x1 = askForUserInput();
  printf("Enter y1 = ");
  y1 = askForUserInput();
  printf("Enter x2 = ");
  x2 = askForUserInput();
  printf("Enter y2 = ");
  y2 = askForUserInput();
  double height = fabs(y2 - y1);
  printf("Point #1 entered: x1 = %lf; y1 =%lf\n", x1, y1);
  printf("Point #2 entered: x2 = %lf; y2 =%lf\n", x2, y2);
  printf("The height of the city encompassed by your request is %lf\n", height);
  return 1.0;
}