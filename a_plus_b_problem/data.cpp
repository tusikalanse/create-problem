#include <bits/stdc++.h>
using namespace std;

void genone(ostream& os, int limit) {
  int a = rand() % (limit + 1);
  int b = rand() % (limit + 1);
  os << a << " " << b << endl;
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
  gen(1, 2, 10);
  gen(3, 4, 1000);
  gen(5, 10, 1000000);
  return 0;
}