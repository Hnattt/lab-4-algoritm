#include <iostream>
#include <cstdlib>
#include "windows.h"
#include <time.h>

#define N 30  

using namespace std;

void selectSort(int a[], int size) {
    int i, j, minIndex;
    int minValue, temp;
    
    cout << "Початковий масив: ";
    for(int k = 0; k < size; k++) {
        cout << a[k] << " ";
    }
    cout << endl << endl;
    
    for(i = 0; i < size - 1; i++) {
        minIndex = i;
        minValue = a[i];
        
        for(j = i + 1; j < size; j++) {
            if(a[j] < minValue) {
                minIndex = j;
                minValue = a[j];
            }
        }
        
        if(minIndex != i) {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
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
    
    cout << endl << "=== СОРТУВАННЯ МЕТОДОМ ВИБОРУ ===" << endl;
    selectSort(arr, N);
    
    return 0;
}
