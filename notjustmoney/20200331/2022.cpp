#include <bits/stdc++.h>
using namespace std;
int main() {
	double x, y, c;
	scanf("%lf %lf %lf", &x, &y, &c);
	double s = 0.0, e = min(x, y);
	while(e - s >= 0) {
		double m = (s+e)/2.0;
		double hx = sqrt(x*x-m*m);
		double hy = sqrt(y*y-m*m);
		double q = (hx*hy)/(hx+hy);
		if(q > c) s = m+1e-6;
		else e = m-1e-6;
	}
	printf("%.3f\n", e);	
	return 0;	
}

