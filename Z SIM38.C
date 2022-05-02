#include<math.h>
double ff(double x)
{
 return(sqrt(1-8*x*x);
}

void main()
{
 double a,b,h,x[20],y[20],sum1 = 0,sum2 = 0, sim38;
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

 for(i = 1; i < n;i++)
 {
   if((i%3) == 0)
      sum1 = sum1 + y[i];
   else
      sum2 = sum2 + y[i];
 }

 sim38 = (3*h/8)*(y[0] + 3*sum2 +2*sum1 + y[n]);
 printf("\n\nSimpson's 3/8th Value = %lf",sim38);
 getch();
}

