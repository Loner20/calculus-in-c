#include<math.h>
double ff(double x)
{
 return(exp(x));
}

void main()
{
 double a,b,h,x[20],y[20],sum = 0,trap;
 int n,i;
 clrscr();
 printf("Enter Lower limit and Upper limit of an Integral \n");
 scanf("%lf%lf",&a,&b);
 printf("Enter number of Intervals ");
 scanf("%d",&n);
 h = (b-a)/n;
 for(i = 0; i<=n;i++)
 {
   x[i] = a;
   y[i] = ff(x[i]);
   a = a+h;
 }
 for(i = 0;i<=n; i++)
 {
  printf("x%d = %lf   y%d = %lf\n",i,x[i],i,y[i]);
 }

 for(i = 1; i<n;i++)
 {
   sum = sum + y[i];
 }

 trap = (h/2)*(y[0] +2*sum+y[n]);

 printf("\n\nTrapezoidal Value = %lf",trap);

 getch();
}

