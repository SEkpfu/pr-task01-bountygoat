#include<iostream>
using namespace std;


void dann(double& hour, double& stavka, double& premiya, double& nalog, int& i) {
	cout << "Vvedite dannie rabotnika " << i << endl;
	cout << "Chasu: " << endl;
	cin >> hour;
	cout << "Stavka: " << endl;
	cin >> stavka;
	cout << "Procent premii: " << endl;
	cin >> premiya;
	cout << "Procent naloga: " << endl;
	cin >> nalog;

}
double zpe(double hour, double stavka, double premiya) {
	double zp = hour * stavka;
	return zp + zp * premiya / 100;
}
double nalogi(double vsya_zp, double nalog) {
	return nalog / 100 * vsya_zp;
}
double naruki(double hour, double stavka, double premiya, double nalog) {
	double vsya_zp = zpe(hour, stavka, premiya);
	return vsya_zp - nalogi(vsya_zp, nalog);
}
int main() {
	double hour, stavka, nalog, premiya, summ_s_nalogom = 0.0;
	for (int i = 1; i < 6; ++i) {
		dann(hour, stavka, premiya, nalog, i);
		summ_s_nalogom += naruki(hour, stavka, premiya, nalog);
	}
	cout << " " << endl;
	cout << "Obshaya summa: " << summ_s_nalogom << endl;
	cout<< "Srednee znachenie: " << summ_s_nalogom / 5.0;

	return 0;
}
