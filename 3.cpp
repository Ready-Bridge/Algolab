// 끝자리 숫자 계산하기 
// 오버플로우 신경써서 풀기

#include <iostream>
using namespace std;

int main() {
  int t, n, x;
  cin >> t;

  for(int i = 0; i < t; i++) {
    cin >> n;
    int sum = 1;
    for(int k = 0; k < n; k++) {
      cin >> x;
      sum = (sum * (x % 10)) % 10;
    }

    cout << sum << endl;
  }

  return 0;
}