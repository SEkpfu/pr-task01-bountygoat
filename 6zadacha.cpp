#include <iostream>
#include <sstream>


using namespace std;

int hour1, hour2;
double stavka1, stavka2, zp1, zp2, nalog1, nalog2;
string fam1, fam2;

int dann1() {
	cout << "kolvo chasov u 1: ";
	cin >> hour1;
	cout << "pochasovaya stavka u 1: ";
	cin >> stavka1;
	cout << "familiya 1: ";
	cin >> fam1;
	cout << "nalog 1: ";
	cin >> nalog1;
	zp1 = hour1 * stavka1;



	return 0;
}
int dann2() {
	cout << "kolvo chasov u 2: ";
	cin >> hour2;
	cout << "pochasovaya stavka u 2: ";
	cin >> stavka2;
	cout << "familiya 2: ";
	cin >> fam2;
	cout << "nalog 2: ";
	cin >> nalog2;
	zp2 = hour2 * stavka2;
	return 0;
}


int main() {
	dann1();
	dann2();
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
		cout << fam1[0] <<"-" << fam1[fam1.length() - 1] << " ";
	}
	if (nalog2 > 50)
	{
		cout << "nalog > 50 u ";
		cout << fam2[0] <<"-"<< fam2[fam2.length() - 1] << " ";
	}
	return 0;
}