// Bublesort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int  main()
{

}

int a[20];                // deklarasi array a dengan ukuran 20
int n;                   // deklarasi variable n untuk menyimpan banyaknya elemen pada array



void input() {               // prosedur untuk input 
    while (true) {           // looping
        cout << "masukan banyaknya elemen pada array : ";            // output ke layar
        cin >> n;                                                    // input dari pengguna
        if (n <= 20)                                                 // jika n kurang dari atau sama dengan 20
            break;                                                    // keluar dari loop
        else {                                                       // jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // output ke layar

        }
    }

    cout << endl;                                    // output baris kosong
    cout << "=====================" << endl;        // output ke layar
    cout << "Masukan elemen array" << endl;         // output ke layar
    cout << "====================";
    for (int i = 0; 1 < n; i++) {               // looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << "; ";  // output ke layar  
        cin >> a[i];                            // input dari pengguna 
    }
} 

    
void display() {                                             // prosedur untuk menampilkan hasil
    cout << endl;                                            // output baris kosong
    cout << "====================" << endl;                  // output ke layar        
    cout << "Elemen Arrayy yang telah tersusun" << endl;     // output ke layar
    cout << "====================" << endl;                  // output ke layar
    for (int j = 0; j < n; j++) {                            // looping dengan j dimulai dari 0 hingga n-1
        cout << a[j] << endl;                                //  output ke layar
    }
    cout << endl;                                            // output baris kosong

}

void BubbleSortArray() {                                 // prosedur untuk mengurutkan Array dengan metode bubblesort
    int pass = 1;                                        // step 1
    for (pass; pass <= n - 1; pass++) {                  //looping dengan i dimulai dari 1 hingga n_1
        for (int j = 0; j <= n - 1 - pass; j++) {        // looping  dengan j dimulai dari 0 hingga n-1            if (a[j] > a[j + 1]) {
               if (a[j] > a[j+1]){                       // jika nilai pada a[j] lebih besar dari a[j+1]
                int temp = a[j];                         // simpan nilai a[j] ke variabel sementara temp 
                a[j] = a[j + 1];                         //Assign nilai a[j + 1 ] ke a[j]
                a[j + 1] = temp;                         //Assigh nilai temp ke a[j+1]
            }
        }
}



   
    
