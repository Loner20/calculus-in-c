double f(double x, double y)
{
 return(x*x + x*y);
}
void main()
{
 double x0,y0,y1,h,x,k1,k2;
 int i= 0,j = 1;
 double f(double,double);
 clrscr();
 printf("Enter initial roots \n");
 scanf("%lf%lf",&x0,&y0);
 printf("Enter the value of x for which you have to find y ");
 scanf("%lf",&x);
 printf("Enter the value of increment (h) ");
 scanf("%lf",&h);
 while(x0<=x)
 {
  k1 = h*f(x0,y0);
  k2 = h*f(x0+h,y0+k1);
  printf("x%d = %lf 	y%d= %lf\n\n" ,i,x0,i,y0);
  printf("k%d = %lf	k%d = %lf\n",j,k1,j+1,k2);
  y1 = y0 + 0.5*(k1+k2);
  y0 = y1;
  x0 = x0 + h;
  i++;
  delay(500);
  }
  getch();
 }