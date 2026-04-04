#include <iostream>

using namespace std;

int findNumber(int array[][3], int n, int m){
    int count = 0;
    int key = 7;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(array[i][j] == key){
                count++;
            }
            
        }
    }
    if(count == 0){
        cout << "Your key not present in this matrix";
    }
    cout << count << endl;
    
}

int sumOfSecondRow(int array[][3], int m){
    int sum = 0;
    for(int i = 0; i < m; i++){
        sum += array[1][i];
    }
    cout << sum << endl;
}

int transpose(int array[][3], int n, int m){
    int newArr[m][n] ={{0}};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << array[i][j] << ", ";
        }
        cout << endl;
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            newArr[i][j] = array[j][i];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << newArr[i][j] << ", ";
        }
        cout << endl;
    }
}

int main(){
    int array[2][3] = {{1, 2, 3},{4, 5, 6}};
    // sumOfSecondRow(array, 3);
    // findNumber(array, 2, 3);
    // transpose(array, 2, 3);
    return 0;
}