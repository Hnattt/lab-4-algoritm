#include <iostream>
#include <cstdlib>
#include "windows.h"
#include <time.h>

#define N 30  

using namespace std;

void insertSort(int a[], int size) {
    int i, j;
    int key;
    
    cout << "Початковий масив: ";
    for(int k = 0; k < size; k++) {
        cout << a[k] << " ";
    }
    cout << endl << endl;
    
    for(i = 1; i < size; i++) {
        key = a[i];
        j = i - 1;
        
        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
        
        cout << i << "-й прохід: (";
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
    
    cout << endl << "=== СОРТУВАННЯ МЕТОДОМ ВСТАВКИ ===" << endl;
    insertSort(arr, N);
    
    return 0;
}
