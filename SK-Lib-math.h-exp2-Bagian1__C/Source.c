/* exp2 example */
#include <stdio.h>      /* printf */
#include <math.h>       /* exp2 */
#include <conio.h>

/*	Source by CPlusPlus
	Modifide For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double param, result;
	param = 8.0;
	result = exp2(param);
	printf("2 ^ %f = %f.\n", param, result);
	_getch();
	return 0;
}