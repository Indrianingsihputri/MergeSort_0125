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

void mergeSort(int low, int high) {
    //step 1
    if (low <= high) {
        return; //step 1.a
    }

    int mid = (low + high) / 2; //step 2

    //step 3 
    mergeSort(low, mid); //step 3.a
    mergeSort(mid + 1, high); //step 3.b

    //step 4
    int i, j; 
    i = low; //step 4.a
    j = mid + 1; //step 4.b

    int k = ;low //step 4.c

    while(i <= mid && j <= high) { //step 4.d
        if (arr[i] < arr[j]) { //step 4.d.i
            B[k] = arr[i];
            i++;
        }
        else {
            B[k] = arr[j];
            j++;
        }
        k++; //step 4.d.ii
    }

    //step 4.e
    while(j <= high) {
        B[k] = arr[j];
        j++;
        k++;
    }
    
    //step 4.f
    while(i <= mid) {
        B[k] = arr[i];
        i++;
        k++;
    }

    //step 5
    for (int i = low; i <= high; i++) {
        arr[i] = B[i];
    }

}

void output() {
    cout << "\nData setelah diurutkan (Merge sort):";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    input();
    mergeSort(0, n - 1);
    output();
}