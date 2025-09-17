#include <iostream>

using namespace std;

void dann(int& hour, int& stavka, int& procent) {
	cout << "kolvo chasov: "<< endl;
	cin >> hour;

	cout << "pochasovaya stavka: "<< endl;
	cin >> stavka;

	cout << "% premii: " << endl;
	cin >> procent;

	cout << "nalogovaya stavka: 13% " << endl;
	
}

void chas( int& hour, int& stavka, int& procent) 
{
	int basovaya_zp, vsya_zp, summ_s_nalogom;
	double premiya, ndfl;
	basovaya_zp = hour * stavka;
	premiya = basovaya_zp * (procent * 0.01);
	vsya_zp = basovaya_zp + premiya;
	ndfl = vsya_zp * 0.13;
	summ_s_nalogom = vsya_zp - ndfl;


	cout << "zp s premiyei: " << vsya_zp << " rub" << endl;
	cout << "podohodny nalog: " << ndfl << "rub" << endl;
	cout << "zp s premiyei i s vuchet nalogov: " << summ_s_nalogom << " rub" << endl;

}

int main() {

	int hour, stavka, procent;
	cout << "Vvedite chasu rabotu, stavku, procent: " << endl;
	dann(hour, stavka, procent);
	chas(hour, stavka, procent);
	return 0;
}