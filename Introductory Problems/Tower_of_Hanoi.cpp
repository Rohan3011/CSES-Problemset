#include <iostream>
using namespace std;

void tower_of_hanoi(int disks, char src, char res, char aux) {
  if (disks == 1) {
    cout << src << " " << res << "\n";
    return;
  }
  tower_of_hanoi(disks - 1, src, aux, res);
  cout << src << " " << res << "\n";
  tower_of_hanoi(disks - 1, aux, res, src);
}

int main() {
  int n;
  cin >> n;
  cout << (1 << n) - 1 << "\n";
  tower_of_hanoi(n, '1', '3', '2');
}