/*Nama : Sri Sukmawati
NPM : 14****250059
kelas c*/

//Program pertama = Faktorial
//15:00
//selesai dalam 15-20 menit

/*
#include <iostream>
using namespace std;

int faktorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

    int main() {
        int n;
        cout << "Masukkan n: ";
        cin >> n;
        cout << "Faktorial dari " << n << " adalah " << faktorial(n);
    }
*/


// deret fibonacci
//15:30
//selesai dalam 20 menit

/*
#include <iostream> 
using namespace std;

int fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    cout << "Masukkan n : ";
    cin >> n;
    cout << "angka ke-" << n << " di deret fibonacci adalah " << fibonacci(n);
}
*/

// GCD / FPB
//15:50
//selesai dalam 20 menit

/*
include <iostream>
using namespace std;

int FPB(int a, int b) {
    if(b == 0){
        return a;
    
    } else {
       return FPB(b, a % b);
    }
}

int main() {
    int a, b;
    cout << "Masukkan nilai : "<< endl;
    cin >> a;
    cin >> b;
    cout << "FPB dari " << a << " dan " << b << " adalah " << FPB(a,b);
}*/

//cetak angka genap
//16:20
//selesai 25 menit 

/*
include <iostream>
using namespace std;


void cetakgenap(int n){
    if(n < 0) {
        return;
    }
    if(n % 2 == 0) {
        cout << n << " ";
    }
     cetakgenap(n - 1);
}


int main() {
    int n;
    cout << "Masukkan angka : " << endl;
    cin >> n;
    cout << "angka genap : ";
    cetakgenap(n);
}
*/

//program ke-5
//cetak angka negatif





#include <iostream>
using namespace std;



void cetakganjil(int n){
    if(n < 0) {
        return;
    }
    if(n % 2 != 0) {
        cout << n << " ";
    }
     cetakganjil(n - 1);
}


int main() {
    int n;
    cout << "Masukkan angka : " << endl;
    cin >> n;
    cout << "angka ganjil : ";
    cetakganjil(n);

}
