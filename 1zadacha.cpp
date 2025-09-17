#include <iostream>

using namespace std;

int main() {
	int hour;
	double stavka, procent;

	cout << "kolvo chasov: ";
	cin >> hour;
	cout << "pochasovaya stavka: ";
	cin >> stavka;
	cout << "% premii: ";
	cin >> procent;

	double basovaya_zp, premiya, vsya_zp;
	basovaya_zp = hour * stavka;
	premiya = basovaya_zp * (procent / 100);
	vsya_zp = basovaya_zp + premiya;

	cout << "zp s premiyei: " << vsya_zp << " rub";

	return 0;
}