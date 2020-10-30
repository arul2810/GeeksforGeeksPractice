#include "iostream"
#include "string"
using namespace std;

int main(){

    int length;
    string string1;

    cin >> string1;

    length = string1.length();

    char *array = new char[length];
    int *freq = new int[length];
    int charlen = 0;

    for(int i =0;i<length;i++){

        if(i==0){
            array[0] = string1[0];
            freq[0] = 1;
            charlen = 1;
            for(int j = 1;j<length;j++){
                if(string1[j] == string1[0]){
                    freq[0] = freq[0] +1;
                }
            }
        }else if(i!=0){
            int temp = 0;
            for(int j=0;j<charlen;j++){

                if(string1[i] == array[j]){
                    temp = 1;
                }
            }
            if(temp == 0 ){
                array[charlen] = string1[i];
                freq[charlen] = 1;
                charlen = charlen +1;
                for(int j = i +1; j < length;j++){
                    if(string1[i] == string1[j]){
                        freq[charlen-1] = freq[charlen-1] + 1;
                    }
                }
            }

        }


    }
// finding maximum and minimum frequency
int temp;
    char temp1;


    for(int i = 0;i<charlen;i++){

        for(int j =0; j< charlen ; j++){

            if(freq[i]>freq[j]){
                temp = freq[i];
                temp1= array[i];
                freq[i]=freq[j];
                array[i]=array[j];
                freq[j] = temp;
                array[j] = temp1;
            }
        }

    }

    cout <<"Max Freq Char:"<<array[0];

    for(int j =1;j<charlen;j++){
        if(freq[0]==freq[j]){
            cout<<","<<array[j];
        }else{
            break;
        }
    }
    cout <<" "<< "Max Freq:"<<freq[0];
    cout<<endl;
    cout <<"Min Freq Char:"<<array[charlen-1];


    for(int j=charlen-2;j>=0;j--){
        if(freq[charlen-1]==freq[j]){
            cout<<","<<array[j];
        }else{
            break;
        }
    }

cout <<" "<<"Min Freq:"<<freq[charlen-1];

}