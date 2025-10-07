#include <iostream>

using namespace std;


void dann(double& hour, double& stavka,double& premiya, double& nalog) {
	cout << "kolvo chasov: ";
	cin >> hour;
	cout << "pochasovaya stavka: ";
	cin >> stavka;
	cout << "procent premii: ";
	cin >> premiya;
	cout << "procent naloga: ";
	cin >> nalog;
}

void zp(int hour, int stavka, double premiya, double nalog, double& zp, double& vsya_zp, double& ndfl, double& summ_s_nalogom) {

	zp = hour * stavka;
	vsya_zp = zp + premiya;
	ndfl = vsya_zp * (nalog / 100);
	summ_s_nalogom = vsya_zp - ndfl;
}

int main() {
	double hour, stavka, premiya, nalog, zp1,zp2, vsya_zp1, vsya_zp2, ndfl1,ndfl2, summ_s_nalogom1, summ_s_nalogom2;
	cout << "Vvedite dannue 1 rabotnika: " << endl;
	dann(hour, stavka, premiya, nalog);
	zp(hour, stavka, premiya, nalog, zp1, vsya_zp1, ndfl1, summ_s_nalogom1);
	cout << " " << endl;
	cout << "Vvedite dannue 2 rabotnika: " << endl;
	dann(hour, stavka, premiya, nalog);
	zp(hour, stavka, premiya, nalog, zp2, vsya_zp2, ndfl2, summ_s_nalogom2);
	cout << " " << endl;

	if (summ_s_nalogom1 > summ_s_nalogom2) 
	{
		cout << "1 zarabotal bolshe \n ";
	}
	else if (summ_s_nalogom2 > summ_s_nalogom1)
	{
		cout << "2 zarabotal bolshe \n";
	}
	else
	{
		cout << "zarabotali porovnu \n";
	}

	cout << "summa zarabotannaya oboimi: " << summ_s_nalogom1 + summ_s_nalogom2 << endl;
	return 0;
}