//revisi
/*#include <iostream>
using namespace std;

void bilangan(int n){
    if(n == 0){
        cout << "Nol";
    } else if (n > 0){
        cout << "Positif";
    } else {
        cout << "Negatif";
    }
}

int main(){
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    bilangan(n);
}*/

/*
#include <iostream>
using namespace std;

string bilangan(int n){
    if(n == 0){
        return "Nol";
    } else if (n > 0){
        return "Positif";
    } else {
        return "Negatif";
    }
}

int main(){
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    cout << bilangan(n);
}
    */

    /*
#include <iostream>
using namespace std;

void kabisat(int n){
    if(n % 300 == 0 || n % 6 == 0 && n % 50 != 0){
        cout << "Kabisat";
    } else {
        cout << "Bukan Kabisat";
    }
}

int main(){
    int n;
    cout << "Masukkan tahun: ";
    cin >> n;
    kabisat(n);
}
    */

/*#include <iostream>
using namespace std;

void fizzBuzz(int bilangan){
    if(bilangan % 3 == 0 && bilangan % 5 == 0){
        cout << "FizzBuzz";
    } else if (bilangan % 5 == 0){
        cout << "Buzz";
    } else if (bilangan % 3 == 0){
        cout << "Fizz";
    } else {
        cout << bilangan;
    }
}

int main(){
    int bilangan;
    cout << "Masukkan bilangan: ";
    cin >> bilangan;
    fizzBuzz(bilangan);
}*/

/*
#include <iostream>
using namespace std;

void perbandingan(int a, int b, int c){
    int max; int min;
if(a > b && a > c && b > c){
    max = a;
    min = c;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
} else if (a > b && a > c && b < c){
    max = a;
    min = b;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
} 

if(b > a && b > c && a> c){
    max = b;
    min = c;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
} else if (a > b && a > c && a < c){
    max = b;
    min = a;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

if(c > a && c > b && a > b){
    max = c;
    min = b;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
} else if(c > a && c > b && a < b){
    max = c;
    min = a;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
}

int main(){
    int a, b, c, max, min;
    cin >> a >> b >> c;
    perbandingan(a, b, c);
}
*/
/*
#include <iostream>
using namespace std;

void perbandingan(int a, int b, int c){
    int max = a;
    int min = a;

    if(b > max){
        max = b;
    }

    if(c > max){
        max = c;
    }

    if(b < min){
        min = b;
    } 

    if(c < min){
        min = c;
    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main() {
    int a, b, c;
    cout << "Masukkan tiga angka: ";
    cin >> a >> b >> c;

    perbandingan(a, b, c);
    return 0;
}*/
/*
#include <iostream>
#include <algorithm>
using namespace std;

void perbandingan(int a, int b, int c) {
    int maks = max({a, b, c});
    int min = min({a, b, c});
    cout << "Max: " << maks << endl;
    cout << "Min: " << min << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    perbandingan(a, b, c);
}
*/

/*
#include <iostream>
using namespace std;

void totalBiaya(int jenisKendaraan, int waktuParkir){
      int totalTarif;
      if(waktuParkir > 0){
            //motor
           if(jenisKendaraan == 1){
              totalTarif = 2000 * waktuParkir;
              } 
             //mobil
            if(jenisKendaraan == 2){
               totalTarif = 5000 * waktuParkir;
              } 
              //bua
            if(jenisKendaraan == 3){
               totalTarif = 10000 * waktuParkir;
              } 

              cout << "Total biaya parkir: " << totalTarif;

      } else {
             cout << "Masukkan waktu dalam bilangan bulat positif dengan satuan jam" << endl;
      }
}
int main(){
    int waktuParkir;
    int jenisKendaraan;
    cin >> waktuParkir >> jenisKendaraan;
    totalBiaya(waktuParkir, jenisKendaraan);
    return 0;
}
    */

#include <iostream>
using namespace std;


    void ceiling(float n){
        if(n == n ){
        cout << n;
        } else { 
        cout << n + 1;
        }
    }

    void floor(float n){
        if(n == n){
        cout << n;
        } else if(n > n && n < n + 1){
        n--;
    }
}
    int main(){
        float n;
        cin >> n;
        string perintah;
        cin >> perintah;

        if(perintah == "ceiling"){
            ceiling(n);
        } else if (perintah == "floor"){
            floor(n);
        }
        
        return 0;

    }

