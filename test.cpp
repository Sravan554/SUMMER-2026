#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(11);
    vec.push_back(12);
    cout << vec.size() << endl ;
    cout << vec.capacity();
}