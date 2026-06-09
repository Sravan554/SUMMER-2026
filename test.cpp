#include <iostream>
using namespace std;
int facto(int k){
    if(k == 0){
        return 1;
    }
    return k * facto(k-1);
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin >> n;
    cout << facto(n) << endl;
    return 0;
}