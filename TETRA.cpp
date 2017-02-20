#include <iostream>
#include <cmath>
#include <cstdio>
#include <iomanip>
#define endl '\n'

using namespace std;

double volume(double u, double v, double w, double U, double V, double W) { 
	double u1,v1,w1; 
	double v2=v*v;
	double w2=w*w;
	double u2=u*u;
	
	u1 = v2 + w2 - U * U; 
	v1 = w2 + u2 - V * V; 
	w1 = u2 + v2 - W * W; 
	return sqrt(4.0*u2*v2*w2 - u2*u1*u1 - v2*v1*v1 - w2*w1*w1 + u1*v1*w1) / 12.0;
}

double surface(double a, double b, double c) {
	return sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c)) / 4.0;
}

int main() {
	ios_base::sync_with_stdio(0);
	cout<<fixed<<setprecision(4);
	int test;
	double WX, WY, WZ, XY, XZ, YZ, sur, rad;
	cin>>test;
	while(test--) {
		cin>>WX>>WY>>WZ>>XY>>XZ>>YZ;
		sur = surface(WX, WY, XY) + surface(WX, XZ, WZ) + surface(WY, YZ, WZ) + surface(XY, XZ, YZ);
		rad = volume(WX, WY, WZ, YZ, XZ, XY) * 3.0 / sur;
		cout<<rad<<endl;
	}
	return 0;
}
