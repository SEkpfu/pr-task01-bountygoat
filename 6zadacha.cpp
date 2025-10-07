#include<iostream>
using namespace std;


void dann(double& hour, double& stavka, double& premiya, double& nalog, string& fam) {
	cout << "Vvedite familiy: " << endl;
	cin >> fam;

	cout << "Vvedite dannue rabotnika: " << endl;
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
	string fam1, fam2;
	double hour, stavka, premiya, zp1, zp2, nalog, nalog1, nalog2;
	dann(hour, stavka, premiya, nalog, fam1);
	zp1 = naruki(hour, stavka, premiya, nalog);
	nalog1 = nalogi(zpe(hour, stavka, premiya), nalog);
	dann(hour, stavka, premiya, nalog, fam2);
	zp2 = naruki(hour, stavka, premiya, nalog);
	nalog2 = nalogi(zpe(hour, stavka, premiya), nalog);
	
	if (zp1<1000)
	{
		cout << "zp<1000 u " << fam1 << endl;
	}
	if (zp2<1000)
	{
		cout <<"zp<1000 u "<< fam2 << endl ;
	}
	if (nalog1 > 50)
	{
		cout << "nalog > 50 u ";
		cout << fam1[0] << "-" << fam1[fam1.length() - 1] << " " << endl;;
	}
	if (nalog2 > 50)
	{
		cout << "nalog > 50 u ";
		cout << fam2[0] << "-" << fam2[fam2.length() - 1] << " " << endl;;
	}
	return 0;
}