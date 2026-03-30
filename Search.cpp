#include <iostream>

using namespace std;

bool stairSearch(int arr[][4], int n, int m, int key){ // Time Complexity - O(n + m)
    int row = 0, col = m-1;
    int startElement = arr[row][col];
    while( row < n && col >= 0){
        if(startElement == key){
            cout << "[" << row << "," << col << "]" << endl;
            return true;
        }
        else if(startElement < key){ 
            startElement = arr[row+1][col]; // move towards down
            row++;
        }
        else{
            startElement = arr[row][col-1]; // move towards left
            col--;
        }
    }

    cout << "Key element is not found in this matrix" << endl;
    return false;
}

int main(){
    int array[4][4] = {{10, 20, 30, 40},
                       {11, 24, 31, 42},
                       {15, 25, 33, 46},
                       {19, 27, 37, 55},
                      };
    
    stairSearch(array, 4 , 4, 41); // Key is not present in matrix
    stairSearch(array, 4 , 4, 25); // key is present in matrix -- output -> [2,1]
    // Time Complexity - O(n + m)
}