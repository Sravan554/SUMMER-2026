#include<iostream>
using namespace std;

int main(){
    int k = 0;
    for(int b = 0; b< 4;b++){
    for(int i = 0;i < 4-k-1;i++){
        cout << " ";
    }
    for(int j =1 ; j < k+2 ; j++){
        cout << j;
    }
    for(int v = k; v > 0; v--){
        cout << v;
    }
    cout << endl;
    k += 1;
    }
}