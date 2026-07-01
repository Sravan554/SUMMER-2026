#include<iostream>
#include<numeric>
using namespace std;
// 410 on leetcode
bool istrue(vector<int>& arr, int m, int n, int mid){
  int stu = 1, pages = 0;
  for(int i =0;i<n;i++){
    if(arr[i] > mid){
      return false;
    }
    if(pages+arr[i] <= mid){
      pages += arr[i];
    }else{
      stu++;
      pages = arr[i];
    }
  }
  if(stu > m) return false;
  else return true;
}

int main(){
  vector<int> arr = {2,1,3,4};
  int n = arr.size();
  int stu = 2;
  int ans = -1;
  int st = 0, end = accumulate(arr.begin(), arr.end(),0);
  while(st<=end){
    int mid = st + (end-st)/2;
    if(istrue(arr,stu,n,mid)){
      ans = mid;
      end = mid-1;
    }
    else{
      st = mid +1;
    }
  }
  cout<< "The minimum of maximum pages allocated is : " << ans << endl;
}