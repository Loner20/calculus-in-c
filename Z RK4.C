double f(double x, double y)
{
 return((y*y - x*x)/(y*y+x*x));
}
void main()
{
 double x0,y0,y1,h,x,k1,k2,k3,k4;
 int i= 0;
 double f(double,double);
 clrscr();
 printf("Enter initial roots \n");
 scanf("%lf%lf",&x0,&y0);
 printf("Enter the value of x for which you have to find y ");
 scanf("%lf",&x);
 printf("Enter the value of increment (h) ");
 scanf("%lf",&h);
 printf("\nx%d = %lf 	y%d= %lf\n\n" ,i,x0,i,y0);
 while(x0<=x)
 {
  k1 = h*f(x0,y0);
  k2 = h*f(x0+h/2,y0+k1/2);
  k3 = h*f(x0+h/2,y0+k2/2);
  k4 = h*f(x0+h,y0+k3);
  printf("k1 = %lf\n",k1);
  printf("k2 = %lf\n",k2);
  printf("k3 = %lf\n",k3);
  printf("k4 = %lf\n",k4);
  y1 = y0 + 0.1666666*(k1+2*(k2+k3)+k4);
  y0 = y1;
  x0 = x0 + h;
  i++;
  printf("\nx%d = %lf 	y%d= %lf\n\n" ,i,x0,i,y0);
  delay(500);
  }
  getch();
  }