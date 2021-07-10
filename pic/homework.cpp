//#include<stdio.h>
//#include<windows.h>

//int m, n;
//long power(int m, int n) {
	//int n2 = 1;
	//for (m; m > 0; m--) {
		//n2 = n2 * n;
	//}
	//return n2;
//}

//int main() {
	//scanf_s("%d %d", &m, &n);
	//printf("%d", power(m, n));
	//system("pause");
//}

//#include<stdio.h>
//#include<windows.h>
//
//int a, b, p, q;
//int zdgys(int a, int b) {
//	if (a > b) { a = b; }
//	for (int i = a; i > 0; i--) {
//		if (a%i == 0) {
//			if (b % i == 0) {
//				return i;
//			}
//		}
//	}
//	return 1;
//}
//int zxgbs(int a, int b, int p) {
//	return a * b / p;
//}
//
//int main() {
//	scanf_s("%d %d", &a, &b);
//	p = zdgys(a, b);
//	printf("%d\n", p);
//	q = zxgbs(a, b, p);
//	printf("%d\n", q);
//	system("pause");
//}

#include<stdio.h>
#include<windows.h>

int x;
int f(int x) {
	if (x == 2) { return 2; }
	if (x == 3) { return 3; }
	int sz[100000], a = 2;
	sz[0] = 2; sz[1] = 3;
	while (true) {
		sz[a] = sz[a - 1] * sz[a - 2];
		a++;

		if (x > sz[a] && x < sz[a + 1]) {
			if (x - sz[a] < sz[a + 1] - x) { return sz[a]; }
			else return sz[a + 1];
		}
	}
}

int main() {
	scanf_s("%d", &x);
	printf("%d\n", f(x));
	system("pause");
}
