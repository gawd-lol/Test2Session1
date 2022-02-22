#include <stdio.h>
#include<math.h>

void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Input x1, y1: \n");
	scanf("%f %f", x1, y1);
	printf("Input x2, y2: \n");
	scanf("%f %f", x2, y2);
}

void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=(sqrtf((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

void output(float x1, float y1,float x2, float y2, float area)
{
  printf("The distance between the points (%f,%f) and (%f,%f) is %f", x1, y1, x2, y2, area);
}

int main()
{
  float a,b,c,d,l;
  input(&a, &b, &c, &d);
  find_distance(a,b,c,d,&l);
  output(a,b,c,d,l);
  return 0;
}