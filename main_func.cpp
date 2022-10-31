#include<utility>

double func(double);

std::pair<double, double> m_func(double A, double B, double h) {
	double func_max = INT_MIN;
	double x_mf = 0;
	
	while (A <= B) {
		auto func_x = func(A);
		if (func_max < func_x) {
			func_max = func_x;
			x_mf = A;
		}
		A += h;
	}
	return std::pair<double, double>(func_max, x_mf);
}