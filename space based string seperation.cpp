#include "iostream"
#include "string"
using namespace std;

int main(){

    string input;
    getline(cin,input);
    int length = input.length();
    int count = 0;
    for(int j = length-1; j >=0 ; j--) {

        if (input[j] == ' ') {


            for (int i = j + 1; count != 0; i++) {
                cout << input[i];
                count = count - 1;
            }
            cout << " ";
        } else if (j > 0 ) {
            count = count + 1;

        } else if ( j == 0){
            count = count + 1;
        }

        if(j==0 && count !=0){
            for (int i = j ; count != 0; i++) {
                cout << input[i];
                count = count - 1;
            }
        }

    }





}