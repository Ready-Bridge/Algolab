//주어진 정수의 합 구하기

#include <iostream>
using namespace std;

int main() {
  int n1, n2, x;
  
  cin >> n1;
  
  for(int i = 0; i < n1; i++) {
    int sum = 0;
    cin >> n2;
    for(int k = 0; k < n2; k++) {
      cin >> x;
      sum += x;
    }
    cout << sum << endl;
  }
  return 0;
}