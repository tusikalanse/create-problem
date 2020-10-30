#include <bits/stdc++.h>
using namespace std;

void genone(ostream& os, int limit) {
  
}

void gen(int l, int r, int limit) {
  for (int _ = l; _ <= r; ++_) {
    string s = to_string(_) + ".in";
    ofstream os(s);
    genone(os, limit);
  }
}

int main() {
  srand(time(NULL));
  
  return 0;
}