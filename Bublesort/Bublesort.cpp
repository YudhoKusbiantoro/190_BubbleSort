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

    


    