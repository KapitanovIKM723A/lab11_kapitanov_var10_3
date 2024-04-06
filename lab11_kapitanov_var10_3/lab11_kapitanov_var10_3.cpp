#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    int n;
    cout << "Введiть розмiр масиву: ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "Введiть елемент " << i + 1 << ": ";
        cin >> arr[i];
    }
    int lastPositiveIndex = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            lastPositiveIndex = i;
        }
    }
    if (lastPositiveIndex != -1) {
        swap(arr[0], arr[lastPositiveIndex]);
    }
    int negativeCount = 0;
    int negativeSum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            negativeCount++;
            negativeSum += arr[i];
        }
    }
    cout << "Масив пiсля перестановки: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\nКiлькiсть вiд'ємних елементiв: " << negativeCount;
    cout << "\nСума вiд'ємних елементiв: " << negativeSum << endl;
    delete[] arr;
    return 0;
}