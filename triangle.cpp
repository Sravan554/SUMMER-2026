#include <iostream>
using namespace std;

int main(){
    int c = 1;
    for(int i = 0; i<4 ;i++){
        int n = c;
        for(int j = 0;j<n;j++){
            cout << c << " ";
        }
        cout << endl;
        c += 1;
    }
}