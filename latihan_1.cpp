//latihan parktikum 1
/*
#include <iostream>
using namespace std;

int usia(int u, int m)
{   
    u = u + m;
    return u;
      
}

int main(){
    int m, u;
    cout << "Masukkan usia anda saat ini\n";
    cin >> u;
    cout << "Masukkan berapa tahun ke depan yang ingin anda prediksi: ";
    cin >> m;
    cout << "Usia anda " << m << " tahun ke depan adalah " << usia(u, m);


}

*/

/*
#include <iostream>
using namespace std;

int pangkat(int n, int m)
{   int hasil = 1;
    for(int i = 0; i < m; i++){
        hasil = hasil * n;
    }
    return hasil;
}

int main(){
    int m, n;
    cout << "Masukkan angka\n";
    cin >> n;
    cout << "Masukkan berapa pangkatnya\n";
    cin >> m;
    cout << n << " pangkat " << m << " adalah " << pangkat(n, m);

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

float luas(int r){
    float phi = 3.14;
    float luas_pizza = r * r * phi;
    return luas_pizza;
}

int main(){
    int r;
    cout << "masukkan jari-jari ";
    cin >> r;

    cout << luas(r);
    return 0;

}*/

/*
#include <iostream>
using namespace std;

int total(int h){
    int total_harga = h + (h *11)/100.00;
    return total_harga;
}
int kembalian(int h, int  u){
    int kembalian = u - total(h);
    return kembalian;
}

int main(){
    int h, u;
    cout << "Masukkan harga barang: " << endl;
    cin >> h;
    cout << "Masukkan uang yang di bayarkan: \n";
    cin >> u;
    cout << "Total belanja " << total(h) << endl;
    cout << "Kembalian " << kembalian(h, u) << endl;
}
*/


/*
#include <iostream>
using namespace std;

float hitung(float m, float c){
    float y = 0;
    float x = y - c / m;
    return x;
}

int main(){
    float m, c, x;
    cout << "Masukkan gradien fungsi " << endl;
    cin >> m;
    cout << "Masukkan konstanta c " << endl;
    cin >> c;

    cout << "persamaan garis lurus y = " << m << "x + " << c << "memotong sumbu x di " << hitung(m, c) << endl;

}

*/

/*
#include <iostream>
using namespace std;

int hitung(int m, int n){
    int hasilBagi = n / m;
    return hasilBagi;
}

int hitungMod(int m, int n){
      //int sisaBagi = n - (m*hitung(m,n)); 
      int sisa = n % m;
      return sisa;
}

int main(){
    int m;
    int n;
    cout << "Masukkan total bebek pak dengklek: " << endl;
    cin >> n;
    cout << "Masukkan total teman pak dengklek: " << endl;
    cin >> m;

    cout << "Masing-masing teman pak dengklek masing-masing dapat " << hitung(m,n);
    cout << endl;
    cout << "bersisa " << hitungMod(m,n);
}*/


#include <iostream>
using namespace std;

int hitungKeliling(int p, int l){
    int keliling = 2 * (p + l);
    return keliling;
}

int hitungLuas(int p, int l){
    int luas = p * l;
    return luas;
}

int main(){
    int p, l;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> p;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> l;
    cout << "Luas persegi panjang ini adalah: " << hitungLuas(p,l) << endl;
    cout << "Keliling dari persegi panjang ini adalah: " << hitungKeliling(p,l) << endl;
}