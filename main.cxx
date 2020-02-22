#define SIZE 100000


int main() {
  vector<int> to {2, 5, 9, 11};
  vector<int> from {1, 2, 3, 5, 30};

  join(from, to);

  for (auto e : to) {
    cout << e << ' ';
  }
  cout << endl;

  return 0;
}
