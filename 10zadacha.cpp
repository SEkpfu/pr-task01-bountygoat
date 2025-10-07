#include <iostream>
using namespace std;


int main() {
	const int raboch = 4;
	const int mesyac = 12;
	double stavka[raboch];
	int chasu[raboch][mesyac];
	double zp[raboch][mesyac][2]; // [0] - zp, [1] - nalog

	cout << "Vvedite stavku dlya 4h rabotnikov : ";
	for (int i = 0; i < raboch; i++) {
		cout << "Rabotnik #" << i + 1 << ": ";
			cin >> stavka[i];
	}
	
	cout << "Vvedite otrabotannue chasu: ";
	for (int i = 0; i < raboch; i++) {
		cout << "Rabotnik #" << i + 1 << ": ";
		for (int j = 0; j < mesyac; j++) {
			cin >> chasu[i][j];
		}
	}

	for (int i = 0; i < raboch; i++) {
		for (int j = 0; j < mesyac; j++) {
			double zpp = stavka[i] * chasu[i][j];
			double nalogi = zpp * 0.13;
			zp[i][j][0] = zpp - nalogi;
			zp[i][j][1] = nalogi;
		}
	}
	cout << "Pervui rabotnik vo vtorom mesyace poluchil: " << zp[0][1][0] << " rub" << endl;

	double obsh3 = 0;
	for (int j = 0; j < mesyac; j++) {
		obsh3 += zp[2][j][1];
	}
	cout << "Obshiu nalog za ves' period u 3-go rabotnika: " << obsh3 << " rub" << endl;

	double maxi = 0;
	int nomerbol = 0;
	for (int i = 0; i < raboch; i++) {
		double meszp = zp[i][2][0] + zp[i][2][1]; // складываем зп с вычетом налога с самим налогом
		if (meszp > maxi) {
			maxi = meszp;
			nomerbol = i + 1;
		}

		
	}
	cout << "Naibolsh zp za 3-iu mesyac poluchil rabotnik # " << nomerbol << endl;

	double obshvse = 0;
	for (int i = 0; i < raboch; i++) {
		for (int j = 0; j < mesyac; j++) {
			obshvse += (zp[i][j][0] + zp[i][j][1]);
		}
	}
	cout << "Zp vsei brigadu za vse vremya: " << obshvse << endl;

	return 0;
}