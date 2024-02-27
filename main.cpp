#include <iostream>
#include "wyszukiwania.cpp"
#include "sortowania.cpp"

using namespace std;

int main() {
    int arr[] = {44, 4, 228, 66, 13, 41, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 44;

    cout << "nieposortowana tablica: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    bubbleSort(arr, n);
    cout << "posortowana tablica za pomoca bubble sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    int arr2[] = {44, 4, 228, 66, 13, 41, 70};
    insertionSort(arr2, n);
    cout << "posortowana tablica za pomoca insertion sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr2[i] << " ";
    cout << "\n";

    int arr3[] = {44, 4, 228, 66, 13, 41, 70};
    cocktailSort(arr3, n);
    cout << "posortowana tablica za pomoca cocktail sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr3[i] << " ";
    cout << "\n";

    int arr4[] = {44, 4, 228, 66, 13, 41, 70};
    quickSort(arr4, 0, n - 1);
    cout << "posortowana tablica za pomoca quick sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr4[i] << " ";
    cout << "\n";

    int arr5[] = {44, 4, 228, 66, 13, 41, 70};
    mergeSort(arr5, 0, n - 1);
    cout << "posortowana tablica za pomoca merge sort: \n";
    for(int i = 0; i < n; i++)
        cout << arr5[i] << " ";
    cout << "\n";

    int liniowy = search_linear(arr, n, x);
    int linowe_wartownikiem = search_linear_sentinel(arr, n, x);
    int skokowe = search_jump(arr, n, x);
    int binarny = search_binary(arr, n, x);

    cout << "wyszukiwanie liniowe index: \n";
    cout << liniowy << " ";
    cout << "\n";

    cout << "wyszukiwanie linowe_wartownikiem index: \n";
    cout << linowe_wartownikiem << " ";
    cout << "\n";

    cout << "wyszukiwanie skokowe index: \n";
    cout << skokowe << " ";
    cout << "\n";

    cout << "wyszukiwanie binarne index: \n";
    cout << binarny << " ";
    cout << "\n";

    return 0;
}
