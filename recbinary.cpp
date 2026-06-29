#include<iostream>
#include<vector>
using namespace std;

int bin(vector<int>& var, int tar, int st, int end){
  if(st<= end){
    int mid = st + (end - st)/2;
    if(tar < var[mid]) return bin(var,tar,st,mid-1);
    else if(tar > var[mid]) return bin(var,tar,mid+1,end);
    else return mid;
  }
  return -1;
}

int main(){
  vector<int> var = {1, 4 ,5 ,7 ,8 ,9};
  int tar = 8;

  cout<< bin(var,tar,0,var.size()-1) << endl;
}