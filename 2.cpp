//주어진 정수의 최대, 최소 구하기

#include <iostream>
using namespace std;


int main() {
  int t, n, x;
  const int N = 100;
  int MaxX, MinX;
  int arr[N];
  
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n;
    
    
    for(int k = 0; k < n; k++) {
      cin >> x;
      arr[k] = x;
    }

    MaxX = arr[0];
    MinX = arr[0];

    //최대값 구하기
    for(int j = 1; j < n; j++) {
      if(arr[j] > MaxX) {
        MaxX = arr[j];
      }
    }

    //최소값 구하기
    for(int j = 1; j < n; j++) {
      if(arr[j] < MinX) {
        MinX = arr[j];
      }
    }

    cout << MaxX << " " << MinX << endl;
  }

  return 0;
}