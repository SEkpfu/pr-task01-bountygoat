#include <iostream>

using namespace std;

int hour;
double stavka, procent;
double basovaya_zp, premiya, vsya_zp;
double nalog, ndfl, summ_s_nalogom;

int dann() {
	cout << "kolvo chasov: ";
	cin >> hour;
	cout << "pochasovaya stavka: ";
	cin >> stavka;
	cout << "% premii: ";
	cin >> procent;
	cout << "nalogovaya stavka: ";
	cin >> nalog;
	return 0;
}

int zp() {

	basovaya_zp = hour * stavka;
	premiya = basovaya_zp * (procent / 100);
	vsya_zp = basovaya_zp + premiya;
	return 0;
}

int nalogi() {
	dann();
	zp();
	ndfl = vsya_zp * (nalog / 100);

	return 0;
}

int naruki() {
	zp();
	summ_s_nalogom = vsya_zp - ndfl;
	return 0;
}

int main() {

	zp();
	nalogi();
	naruki();

	cout << "zp s premiyei: " << vsya_zp << " rub" << endl;
	cout << "podohodny nalog: " << ndfl << "rub" << endl;
	cout << "zp s premiyei i s vuchet nalogov: " << summ_s_nalogom << " rub" << endl;

	return 0;
}