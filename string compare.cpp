//
// Created by Arul Prakash Samathuvamani on 01/10/20.
//

#include "iostream"
#include "string"
using namespace std;
int main(){

    string input;
    string compare;

    cin >> input;
    cin >> compare;
    int length_input = input.length();
    int length_compare = compare.length();
    int index;
    signed int ttrue=0;
    int ass = 0;

    for(int i =0 ; i < length_input; i++){

        if(input[i] == compare[0]){
            int test = 1;
            for(int j = 1; j< length_compare; j++){
                if(input[i+j]==compare[j]){
                    test = test+1;
                }
            }

            if(test == length_compare && ass == 0){
                index = i;
                ttrue = 0;
                ass = 1;
            }else if(test != length_compare && ass == 0){
                ttrue = 1;
            }

        }

    }
    if(ttrue){
        cout <<"-1";

    } else{
        cout<< index;
    }


}