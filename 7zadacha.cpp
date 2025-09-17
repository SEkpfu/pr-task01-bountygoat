#include <iostream>
using namespace std;

int kol_ch1, stavka1, kol_ch2, stavka2, kol_ch3, stavka3, kol_ch4, stavka4, kol_ch5, stavka5;
int summa_ob, s1, s2, s3, s4, s5;
double srz;

int r1() {
	cout << "Vvedite kol-vo chasov 1: ";
	cin >> kol_ch1;
	cout << "Vvedite stavku 1: ";
	cin >> stavka1;
	s1 = kol_ch1 * stavka1;
	summa_ob += s1;
	return 0;
}

int r2() {
	cout << "Vvedite kol-vo chasov 2: ";
	cin >> kol_ch2;
	cout << "Vvedite stavku 2: ";
	cin >> stavka2;
	s2 = kol_ch2 * stavka2;
	summa_ob += s2;
	return 0;
}
int r3() {
	cout << "Vvedite kol-vo chasov 3: ";
	cin >> kol_ch3;
	cout << "Vvedite stavku 3: ";
	cin >> stavka3;
	s3 = kol_ch3 * stavka3;
	summa_ob += s3;
	return 0;
}
int r4() {
	cout << "Vvedite kol-vo chasov 4: ";
	cin >> kol_ch4;
	cout << "Vvedite stavku 4: ";
	cin >> stavka4;
	s4 = kol_ch4 * stavka4;
	summa_ob += s4;
	return 0;
}
int r5() {
	cout << "Vvedite kol-vo chasov 5: ";
	cin >> kol_ch5;
	cout << "Vvedite stavku 5: ";
	cin >> stavka5;
	s5 = kol_ch5 * stavka5;
	summa_ob += s5;
	return 0;
}

int main() {

	r1();
	r2();
	r3();
	r4();
	r5();


	cout << "Zp 1 rabotnika: " << s1 << endl;
	cout << "Zp 2 rabotnika: " << s2 << endl;
	cout << "Zp 3 rabotnika: " << s3 << endl;
	cout << "Zp 4 rabotnika: " << s4 << endl;
	cout << "Zp 5 rabotnika: " << s5 << endl;

	cout << "Obshaya summa: " << summa_ob << endl;
	srz = summa_ob / 5;
	cout << "Srednyaya zp brigadu: " << srz << endl;

	return 0;
}
