#include <iostream>
using namespace std;
void insertion_sort (int array[] , int size){
    for (int i= 1 ; i<size ; i++){
        int temp = array[i];
        int j =i-1;
        while (j>-1 && temp<array[j]){
            array[j+1]=array[j];
            array[j]=temp;
            j--;
        }

    }
}
int main() {
    int array[] = {73 , 88,1,18,63 , 66,100,8};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    insertion_sort(array, size);

    cout << "After sorting: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}