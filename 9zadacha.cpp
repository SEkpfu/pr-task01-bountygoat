#include <iostream>
#include<vector>
using namespace std;


vector<double> zpe(int kr) {
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
    cout << "Obshaya summa uplachenogo naloga sostavlyaet: " << sum_nal << endl;
    return zp;
}
int minimum(vector<double> zp, int kr) {
    int rabmin = 0;
    double minzp = 999999999;
    for (int i = 0; i < kr; ++i) {
        if (zp[i] < minzp) {
            minzp = zp[i];
            rabmin = i;
        }
    }
    return rabmin;
}
vector<double> maximum(vector<double> zp, int kr) {
    double rabmax = 0;
    double maxzp = 0;
    for (int i = 0; i < kr; ++i) {
        if (zp[i] > maxzp) {
            maxzp = zp[i];
            rabmax = i;
        }
    }
    return { maxzp, rabmax };
}
int bol50(vector<double> zp, int kr) {
    cout << "Nomera rabochih s zp>50k: " << endl;
    int rabbol50 = 0;
    for (int i = 0; i < kr; ++i) {
        if ((zp[i]) > 50000) {
            rabbol50 += 1;
            cout << i + 1 << " ";
        }
    }
    cout << "\n";
    return rabbol50;
}


int main(){
    vector<double> zp;
    vector<double> rab_maxzp;
    double sum_nal;
    int rabmin, rabbol50;

    cout << "Vvedite kol-vo rabochih: " << endl;
    int kr;
    cin >> kr;
    zp = zpe(kr);
    rabmin = minimum(zp,kr);
    rab_maxzp = maximum(zp, kr);
    rabbol50 = bol50(zp, kr);
    
    cout << "Nomer rabotnika s naimenshei zp: " << rabmin + 1 << endl;
    cout << "Max zp sostavlyaet: " << rab_maxzp[0] << " nomer rabotnika: " << rab_maxzp[1] + 1 << endl;
    cout << "Kol-vo rabochix chya zp >50k: " << rabbol50 << endl;

    return 0;
}