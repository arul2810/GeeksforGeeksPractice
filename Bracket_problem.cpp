#include "iostream"
#include "string"
using namespace std;

int main()
{
    string input;
    cin >> input;

    // Bracket correction

    int length;
    length = input.length();
    int bracket = 0;
    int start_bracket = 0;
    int end_bracket = 0;

    for(int i =0; i < length;i++){

        if(input[i] == '('){
            if(bracket == 0){
                start_bracket = i;
            }
            bracket = bracket +1;

        }else if(input[i]==')'){
            bracket = bracket - 1;
            if(bracket<0 && end_bracket ==0 ){
                end_bracket = i;
            }
        }

    }

    if(bracket ==0){

        cout << input ;

    }else if(bracket > 0){

        for (int i = 0;i<length;i++){

            if(input[i] == '(' && i >= start_bracket && bracket != 0){
                bracket = bracket -1 ;
            }else{
                cout << input[i];
            }


        }
    }else if(bracket < 0){
        for (int i = 0;i<length;i++){

            if(input[i] == ')' && i >= end_bracket && bracket != 0){
                bracket = bracket + 1 ;

            }else{
                cout << input[i];
            }


        }
    }






}