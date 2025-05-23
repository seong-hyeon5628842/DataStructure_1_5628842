#include"addPoly.h"

polynomial addPoly(polynomial A, polynomial B) {
	polynomial C;
	int A_index = 0, B_index = 0, C_index = 0;
	int A_degree = A.degree, B_degree = B.degree;
	C.degree = MAX(A.degree, B.degree);
	while (A_index <= A.degree && B_index <= B.degree) {
		if (A_degree > B_degree) {
			C.coef[C_index++] = A.coef[A_index++];
			A_degree--;
		}
		else if (A_degree == B_degree) {
			C.coef[C_index++] = A.coef[A_index++] + B.coef[B_index++];
			A_degree--;
			B_degree--;
		}
		else {
			C.coef[C_index++] = B.coef[B_index++];
			B_degree--;
		}
	}
		return C;
	}
	void printPoly(polynomial P) {
		int i, degree;
		degree = p.degree;
		for (i = 0; i <= P.degree; i++) {
			printf("#.0Fx^%d", P.coef[i], degree--);
			if (i < P.degree)printf(" +");
		}
		printf("\n");
	}