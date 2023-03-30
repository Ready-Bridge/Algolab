//가위바위보 게임
//배열 사용하지 않고 풀기

#include <iostream>
using namespace std;

int main() {
  int t, n, x;
  int s1 = 0;
  int s2 = 0;
  int s3 = 0;

  cin >> t;
  
  for(int i = 0; i < t; i++) {
    cin >> n;

    for(int j = 0; j < n; j++) {

      cin >> x;
      
      if(x == 1) {
        s1 += 1;
      } else if(x == 2) {
        s2 += 1;
      } else {
        s3 += 1;
      }
    }
    
    if(s1 == n or s2 == n or s3 == n) {
      cout << 0 <<endl;
    } else if(s1 >=1 and s2 >=1 and s3 >= 1) {
      cout << 0 <<endl;
    } else {
      if(s1 == 0)
        cout << s3 <<endl;
      else if (s2 == 0)
        cout << s1 <<endl;
      else
        cout << s2 <<endl;
    }
    
    s1 = 0; 
    s2 = 0; 
    s3 = 0;
    
  }

  return 0;
}