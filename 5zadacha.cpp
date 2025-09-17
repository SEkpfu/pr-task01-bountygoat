#include <iostream>

using namespace std;

int hour1, hour2;
double stavka1, stavka2, zp1,zp2;

int dann1() {
	cout << "kolvo chasov u 1: ";
	cin >> hour1;
	cout << "pochasovaya stavka u 1 : ";
	cin >> stavka1;
	zp1 = hour1 * stavka1;
	return 0;
}
int dann2() {
	cout << "kolvo chasov u 2: ";
	cin >> hour2;
	cout << "pochasovaya stavka u 2: ";
	cin >> stavka2;
	zp2 = hour2 * stavka2;
	return 0;
}

int main() {
	dann1();
	dann2();
	if (zp1 > zp2) 
	{
		cout << "1 zarabotal bolshe \n ";
	}
	else
	{
		cout << "2 zarabotal bolshe \n";
	}

	cout << "summa zarabotannaya oboimi: " << zp1 + zp2 << endl;
	return 0;
}