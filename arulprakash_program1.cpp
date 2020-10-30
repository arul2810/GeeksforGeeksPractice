#include "iostream"
using namespace std;

int main()
{
    int length;
    cin >> length;

    int *array = new int[length];

    for(int i = 0;i < length;i++){

        cin >> array[i];

    }
    int index1;
    int index2;
    int index3;
    signed int max=0;
    signed int sum;

    for(int i =0; i < length-2 ; i++ ) {
        for(int j = i+1; j< length-1;j++){
            for (int k = i+2 ; k < length ; k++){

                sum = array[i]+array[j]+array[k];
                if(sum > max){
                    max = sum;
                    index1 = i;
                    index2= j;
                    index3=k;
                }


            }
        }

    }

    cout << max;
    cout <<"(";
    cout << array[index1]<<","<<array[index2]<<","<<array[index3]<<")";



}