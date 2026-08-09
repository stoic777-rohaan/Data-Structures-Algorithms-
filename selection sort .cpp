#include <iostream>
using namespace std;

void selection_sort (int array[] , int size ){
    
    for (int i=0 ; i<size ; i++){
        int mini_index = i;
        for(int j=i+1 ; j<size ; j++){
            if (array[j]<array[mini_index]){
                mini_index= j;
            }
        }
        if(i!=mini_index){
        int temp= array[i];
        array[i]= array[mini_index];
        array[mini_index]= temp;
    }
    }
    
}
int main() {
    int array[] = {64, 25, 12, 22, 11};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    selection_sort(array, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}