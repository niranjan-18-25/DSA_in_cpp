#include <iostream>

using namespace std;

int trap(int height[], int size){
    int left_max[20000];
    int right_max[20000];
    int minInMaxHeight[20000];
    left_max[0] = height[0];
    right_max[size - 1] = height[size - 1];

    // left max collecting
    for(int i = 1; i < size; i++){
        left_max[i] =  max(left_max[i-1], height[i]);
    }
    // right max collecting
    for(int i = size-2; i >= 0; i--){
        right_max[i] = max(right_max[i+1],height[i]);
    }
    // minimun height in rigth max and left max
    for(int i = 0; i < size; i++){
        minInMaxHeight[i] = min(left_max[i], right_max[i]);
    }

    int collecting_water = 0;

    for(int i = 0; i < size; i++){
        int curTrap = minInMaxHeight[i] - height[i];
        if(curTrap > 0){
            collecting_water += curTrap;
        }
    }

    return collecting_water;
}

int main(){
    int array[] = {4,2,0,3,2,5};
    int size = sizeof(array) / sizeof(int);
    cout << trap(array, size);
}