#define SIZE 100000


int main() {
  vector<int> to (SIZE);
  vector<int> from (SIZE);

  iota(to.begin(), to.end(), SIZE);
  iota(from.begin(), from.end(), 0);

  join(from, to);
/*
  for (auto e : to) {
    cout << e << ' ';
  }
  cout << endl;
*/
  return 0;
}
