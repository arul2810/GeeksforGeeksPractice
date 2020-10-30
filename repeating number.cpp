#include "iostream"
using namespace std;

int main(){

    int number;
    cin >> number;

    int *array = new int[number];
    for(int i = 0 ; i < number ; i++){
        cin >> array[i];
    }

    for(int i =0 ;i < number;i++){
        for(int j = i; j < number;j++){
            int temp;
            if(array[i]>array[j]){
                temp = array[j];
                array[j]= array[i];
                array[i] = temp;
            }
        }
    }

    for(int i =0,j=(number-1); i < (number/2); i++,j--){
        cout << array[j]<<" "<<array[i]<<" ";
    }


}