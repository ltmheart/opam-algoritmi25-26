#include <stdio.h>
#include <math.h>
int main (){
	int x;
	double y;
	printf ("Vvedit znachennya x:");
	scanf ("%d", &x);
	y = sin(sqrt(x));
    printf("Znachennya y = %f\n", y);
	return 0;
	
}
