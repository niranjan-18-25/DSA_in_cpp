#include <iostream>

using namespace std;

int spiralMatrix(int arr[][4], int n, int m){
    int srow = 0, erow = n-1;
    int scol = 0, ecol = m-1;
    while(srow <= erow && scol <= ecol){
        //Top
        for(int i = scol; i <= ecol; i++){
            cout << arr[srow][i] << " ";
        }
        
        //Right
        for(int j = srow+1; j <= erow; j++){
            cout << arr[j][ecol] << " ";
        }

        //Bottom
        for(int i = ecol-1; i >= scol; i--){
            if(srow == erow){
                break;
            }
            cout << arr[erow][i] << " ";
        } 

        //Left
        for(int j = erow - 1; j >= srow+1; j--){
            if(scol == ecol){
                break;
            }
            cout << arr[j][scol] << " ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
    }
}
int main(){
    int array[5][4] = {{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       {13,14,15,16},
                       {17,18,19,20}
                      };
    
    spiralMatrix(array, 5 , 4);
}