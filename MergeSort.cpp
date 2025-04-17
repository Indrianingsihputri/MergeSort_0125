#include <iostream>
using namespace std;

int arr[20], n[20];

int n;

void input() {
    while (true) {
        cout << "Masukkan Panjang elemen array: ";
        cin >> n;

        if (n<= 20) {
            break;
        }
        else {
            cout << "\nMasukkan Panjang array adalah 20";
        }
    }

    cout << "\n==========================";
    cout << "\nInputkan ISI Elemen Array";
    cout << "\n==========================" << endl;

    for (int i = 0; i < n; i++ ) {
        cout << "Array index ke - " << i << ":";
        cin >> arr[i];
    }

}

void output() {
    cout << "\nData setelah diurutkan (Merge sort)"
}


