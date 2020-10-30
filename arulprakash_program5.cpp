#include "iostream"
using namespace std;



int main(){

    int m,n;

    cin >>m;
    cin >>n;

    int array[m][n];

    for(int i = 0; i< m ; i++){
        for(int j = 0; j<n; j++){
            cin >> array[i][j];
        }
    }

    int tempi,tempj = 0;
    int endi =0;
    int endj=0;

    int min;
    int cost=0;
    int modified;

    for(int i =0;;i++){

        if(tempi == endi && tempj == endj){
            goto print;
        } else {
            // find min
            if (tempi == 0 && tempj < n - 1) {
                min = array[tempi][tempj + 1];
                modified = 0;
                if (tempi < m - 1 && tempj < n - 1) {
                    if (min > array[tempi + 1][tempj + 1]) {
                        cost = cost + array[tempi + 1][tempj + 1];
                        tempi = tempi + 1;
                        tempj = tempj + 1;
                        modified = 1;
                    } else if (min > array[tempi + 1][tempj]) {
                        cost = cost + array[tempi + 1][tempj];
                        tempi = tempi + 1;
                        tempj = tempj;
                        modified = 1;
                    }
                }
                if (modified != 1) {
                    tempi = tempi;
                    tempj = tempj + 1;
                    cost = cost + array[tempi][tempj];
                }
            } else if (tempi < m && tempj < n - 1) {
                min = array[tempi][tempj + 1];
                modified = 0;
                if (tempi < m - 1 && tempj < n - 1) {
                    if (min > array[tempi + 1][tempj + 1]) {
                        cost = cost + array[tempi + 1][tempj + 1];
                        tempi = tempi + 1;
                        tempj = tempj + 1;
                        modified = 1;
                    } else if (min > array[tempi + 1][tempj]) {
                        cost = cost + array[tempi + 1][tempj];
                        tempi = tempi + 1;
                        tempj = tempj;
                        modified = 1;
                    } /*else if (min > array[tempi + 1][tempj - 1]) {
                        cost = cost + array[tempi + 1][tempj - 1];
                        tempi = tempi + 1;
                        tempj = tempj - 1;
                        modified = 1;
                    }*/
                }
                if (modified != 1) {
                    tempi = tempi;
                    tempj = tempj + 1;
                    cost = cost + array[tempi][tempj];
                }
            } else if (tempi < m && tempj == n) {
                min = array[tempi-1][tempj ];
                modified = 0;
                if (tempi < m - 1 && tempj < n - 1) {
                    if (min > array[tempi + 1][tempj + 1]) {
                        cost = cost + array[tempi + 1][tempj + 1];
                        tempi = tempi + 1;
                        tempj = tempj + 1;
                        modified = 1;
                    } else if (min > array[tempi + 1][tempj]) {
                        cost = cost + array[tempi + 1][tempj];
                        tempi = tempi + 1;
                        tempj = tempj;
                        modified = 1;
                    } /*else if (min > array[tempi + 1][tempj - 1]) {
                        cost = cost + array[tempi + 1][tempj - 1];
                        tempi = tempi + 1;
                        tempj = tempj - 1;
                        modified = 1;
                    }*/
                }
                if (modified != 1) {
                    tempi = tempi;
                    tempj = tempj + 1;
                    cost = cost + array[tempi][tempj];
                }
            }
        }

    }

    print : cout << cost;








}