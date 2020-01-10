#include <iostream>
#include <string.h>
using namespace std;



string reverse(string s){
  string ans;
  for(int i = strlen(s.c_str()) ; i >= 0 ; i--){
    ans += s[i];
  }
  return ans;
}

string getBinary(char c){
  string ans;
  int n = (int)c;
  while(n != 0){
    ans += (char)(n % 2) + 48;
    n /= 2;
  }
  return reverse(ans);
}

int main()
{
    string s;
    getline(cin,s);
    for(int i = 0 ; i < strlen(s.c_str()) ; i++){
      cout << getBinary(s[i]) << " ";
    }
}
