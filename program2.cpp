#include "iostream"
using namespace std;

int main(){

    int sum;

    cin >> sum;
    int min;
    int yes = 0;

    int fib[1000];
    fib[0]=0;
    fib[1]=1;

    for(int i = 2; i < 500 ; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(int i = 0 ; yes ==1 ; i ++ ){

        if(fib[i] > sum){
            min = fib[i-1];
            yes =1 ;
        }
    }

    int diff = sum - min;
    cout << min<<",";
    int tempdif;
    int maxindex;
    int found;
    yes = 0;

    for(int i = 0; found ==1 ; i++){

        if(diff > fib[i]){
            maxindex = i;
            found =1 ;
        }
    }

    for(int i = maxindex ; i <=0; i--){
        for(int j = i-1;j<=0;j--){
            tempdif = diff - fib[i] - fib[j];
            if(tempdif == 0){
                cout << fib[i]<<","<<fib[j];
            }

        }

    }

}