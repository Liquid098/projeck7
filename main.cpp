#include <iostream>
using namespace std;
int main() {
	double a, b, c, v, s;
	cout << "Vvedite storonu A: ";
	cin >> a;
	cout << "Vvedite storonu B: ";
	cin >> b;
	cout << "Vvedite storonu C: ";
	cin >> c;
	v = a * b * c;
	s = 2 * (a * b + b * c + a * c);
	cout << "Ob'yom pryamougol'nogo parallelepipeda: " << v << endl;
	cout << "Ploshyad' bokovoy poverkhnosti: " << s;
	return 0;
}