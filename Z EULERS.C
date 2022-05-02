#include<math.h>
double f(double x, double y)
{
 double z;
 z = ((y-x)/sqrt(x*y));
 return(z);
}
void main()
{
 double x0,y0,h,x,y1;
 int i  = 0;
 clrscr();
 printf("Enter x0, y0 and h ");
 scanf("%lf%lf%lf",&x0,&y0,&h);
 printf("Enter the value of x for which you have to find y ");
 scanf("%lf",&x);
 while(x0<=x)
 {
  printf("x%d = %lf y%d = %lf\n\n",i,x0,i,y0);
  y1 = y0 + h*f(x0, y0);
  x0 = x0 +h;
  y0 = y1;
  i++;
 }
 getch();
}
