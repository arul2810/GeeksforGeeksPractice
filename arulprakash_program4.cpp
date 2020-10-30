#include "iostream"
using namespace std;

int main(){

    int length;
    cin >> length;

    int *array = new int[length];

    for (int i =0 ; i < length; i++){


        cin >> array[i];
    }
    int *newarray = new int[length];
    int zeros = 0;
    int j = 0;


    for (int i =0 ; i < length ; i ++){
        if(array[i] == 0){
            zeros = zeros +1;
        }else{
            newarray[j] = array[i];
            j = j+1;

        }
    }

    for(int i =0 ; i < zeros; i++){
        newarray[j] = 0;
        j = j+1;
    }

    for(int i = 0; i <length; i++){
        cout << newarray[i];
    }

}