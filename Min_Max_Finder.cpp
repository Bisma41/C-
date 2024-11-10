#include <iostream>
using namespace std;

int main() {
    int arr1[5];
cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    int min = arr1[0];
    int max = arr1[0];
    for (int i = 1; i < 5; i++) { 
        if (arr1[i] < min) {
            min = arr1[i];
        }
        if (arr1[i] > max) {
            max = arr1[i];
        }
    }
    cout << "Minimum number: " << min << endl;
    cout << "Maximum number: " << max << endl;

    return 0;
}
