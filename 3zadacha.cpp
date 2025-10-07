#include<iostream>
using namespace std;

void dann(int& h, int& stavka, double& premiya, double& nalog) {


	cout << "Vvedite chasu: " << endl;
	cin >> h;
	cout << "Vvedite stavku: " << endl;
	cin >> stavka;
	cout << "Vvedite procent premii: " << endl;
	cin >> premiya;
	cout << "Vvedite procent naloga: " << endl;
	cin >> nalog;


}

int main() {
	int h, stavka;
	double premiya, nalog, zp, naruki, vsya_zp, ndfl, summ_s_nalogom;
	dann(h, stavka, premiya, nalog);

	zp = h * stavka;
	vsya_zp = zp + premiya;
	ndfl = vsya_zp * (nalog / 100);
	summ_s_nalogom = vsya_zp - ndfl;

	cout << "zp s premiyei: " << vsya_zp << " rub" << endl;
	cout << "podohodny nalog: " << ndfl << "rub" << endl;
	cout << "zp s premiyei i s vuchet nalogov (na ruki): " << summ_s_nalogom << " rub" << endl;
	return 0;
}