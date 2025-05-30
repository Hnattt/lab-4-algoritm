#include <iostream>
#include <cstdlib>
#include "windows.h"
#include <time.h>

#define N 30 

using namespace std;

void bubbleSort(int a[], int size) {
    int i, j;
    int temp;
    
    cout << "Початковий масив: ";
    for(int k = 0; k < size; k++) {
        cout << a[k] << " ";
    }
    cout << endl << endl;
    
    for(i = 0; i < size - 1; i++) {
        for(j = size - 1; j > i; j--) {
            if(a[j] < a[j - 1]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
        
        cout << (i + 1) << "-й прохід: (";
        for(int k = 0; k < size; k++) {
            cout << a[k];
            if(k == i) cout << ";";
            if(k < size - 1 && k != i) cout << ",";
        }
        cout << ")" << endl;
    }
    
    cout << endl << "Відсортований масив: ";
    for(int k = 0; k < size; k++) {
        cout << a[k] << " ";
    }
    cout << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int arr[N];
    srand(time(NULL));
    
    cout << "Генерація масиву з " << N << " елементів у діапазоні [-60, 60]:" << endl;
    
    for(int i = 0; i < N; i++) {
        arr[i] = rand() % 121 - 60; 
    }
    
    cout << endl << "=== СОРТУВАННЯ МЕТОДОМ БУЛЬБАШКИ ===" << endl;
    bubbleSort(arr, N);
    
    return 0;
}
