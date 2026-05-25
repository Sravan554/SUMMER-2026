#include <iostream>
using namespace std;

int main(){
    char c ;
    c = 'a';
    for(int i = 0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
            cout << c << " ";
            c += 1;
        }
        cout << endl;
    }
    cout << "This was added";
}