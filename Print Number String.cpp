#include "iostream"
#include "string"
using namespace std;

int main(){

    string input;
    cin >> input;
    int length = input.length();
    string characters;
    for(int i = 0; i < length; i++){
        if(isdigit(input[i])){
            if(isdigit(input[i+1])){
                int temp;
                temp =((int(input[i])-48)*10)+(int(input[i+1])-48);
                for(int j =0; j < temp; j++){
                    cout << input[i-1];
                }
                i = i +1;
            }else{
                int temp;
                temp = (int(input[i])-48);
                for(int j =0; j< temp; j++){
                    cout << input[i-1];
                }
            }
        }

    }


}