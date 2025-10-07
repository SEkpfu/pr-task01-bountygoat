#include <iostream>
using namespace std;
#include<vector>

int main() {

    cout << "Vvedite kol-vo rabochih: " << endl;
    int kr;
    cin >> kr;



    vector<double> kol_ch(kr), stavka(kr);
    for (int i = 0; i < kr; ++i) {
        cout << "Vvedite kol-vo chasov rabotnika ¹" << i + 1 << endl;
        cin >> kol_ch[i];
        cout << "Vvedite stavku rabotnika ¹" << i + 1 << endl;
        cin >> stavka[i];
    }
    double sum_nal = 0;
    vector<double> sk(kr), nal(kr), zp(kr);
    for (int i = 0; i < kr; ++i) {
        sk[i] = kol_ch[i] * stavka[i];
        nal[i] = sk[i] * 0.13;
        sum_nal += nal[i];
        zp[i] = sk[i] - nal[i];

    }  


    int rabmin = 0;
    double minzp = 9999999;
    for (int i = 0; i < kr; ++i) {
        if (zp[i] < minzp) {
            minzp = zp[i];
            rabmin = i;
        }
    }
    cout << "Nomer rabotnika s naimenshei zp: " << rabmin + 1 << endl;


    int rabmax = 0;
    double maxzp = 0;
    for (int i = 0; i < kr; ++i) {
        if (zp[i] > maxzp) {
            maxzp = zp[i];
            rabmax = i;
        }
    }
    cout << "Max zp sostavlyaet: " << maxzp << " nomer rabotnika: " << rabmax + 1 << endl;

    cout << "Obshaya summa uplachenogo naloga sostavlyaet: " << sum_nal << endl;


    cout << "Nomera rabochih s zp>50k: " << endl;
    int rabbol50 = 0;
    for (int i = 0; i < kr; ++i) {
        if ((zp[i]) > 50000) {
            rabbol50 += 1;
            cout << i + 1 << " ";
        }
    }
    cout << "\n";
    cout << "Kol-vo rabochix chya zp >50k: " << rabbol50 << endl;

    return 0;
}