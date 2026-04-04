#include <iostream>
#include <string>

using namespace std;

bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){ 
        cout << "The strings are not an anagram" << endl;
        return false;
    }
    char arr[26] ={0};
    int length_of_string = str1.length();

    for(int i = 0; i < length_of_string; i++){
        int position ;
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            position = str1[i] - 'A' ;
        }else{
            position = str1[i] - 'a' ;
        }
        arr[position]++ ;
    }
    
    for(int i = 0; i < length_of_string; i++){
        int position ;
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            position = str2[i] - 'A' ;
        }else{
            position = str2[i] - 'a' ;
        }
        
        if(arr[position] == 0){
            cout << "The strings are not an anagram" << endl;
            return false;    
        }
        arr[position]-- ;
    }
    cout << "The strings are anagram"<< endl;
    return true;
}

int main(){
    string str1 = "Niranjan";
    string str2 = "RANjanin";
    cout << isAnagram(str1, str2);
    return 0;

}
