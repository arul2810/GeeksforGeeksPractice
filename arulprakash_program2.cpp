#include "iostream"
using namespace std;
int main(){

    int sum;
    int min=0;
    int yes = 0;
    int fib[50];
    int maxindex=0;
    fib[0]=0;
    fib[1]=1;
    cin >> sum;


    for(int i = 2; i < 40 ; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }


    for(int i = 0 ; yes ==0 ; i ++ ){

        if(fib[i] > sum){
            min = fib[i-1];
            yes =1 ;
            maxindex = i-1;
        }
    }

    int diff = sum - min;
    cout << min<<",";
int tempdif;

    int found=0;


    for(int i = 0; found ==0 ; i++){

        if(diff < fib[i]){
            maxindex = i;
            found =1 ;
        }
    }

    for(int i = maxindex ; i >=0; i--){
        for(int j = i-1;j>=0;j--){
            tempdif = diff - fib[i] - fib[j];
            if(tempdif == 0){
                cout << fib[i] <<","<<fib[j];
                goto exit;
            }

        }

    }
exit : cout << "";
}