//Name: Sakib Khan
//Substring Pyramid
#include<iostream>
using namespace std; 

int main(){
    string str;
    int l;
    getline(cin, str);
    cout << endl;
    l = str.length();
    for(int i = -1; i< l; i++){
        for(int j = 0;  j <=i; j++){
            cout << str[j];
        }
        cout << "\n";
    }
    for (int i = l-2; i>=0; i--){
        for(int j=0; j<=i; j++){
            cout << str[j];
        }
        cout << endl;
    }
    return 0;
}
