#include <stdio.h>
#include <conio.h>
float tinh (float x, int n)
{
	if (n == 0)
	return 0;
	if (n == 1)
	return x;
	return (1+ x/n)*tinh(x,n-1)-(x/n)*tinh(x,n-2);
}
int main ()
{
	float x;
	int n;
	printf ("\n nhap x: ");
	scanf ("%f",&x);
	printf ("\n nhap n: ");
	scanf ("%d",&n);
	float kq = tinh (x,n);
	printf ("\n ketqua = %.2f",kq);
	getch ();
	return 0;
}