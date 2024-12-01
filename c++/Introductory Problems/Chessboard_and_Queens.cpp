#include <bits/stdc++.h>
using namespace std;

int const N = 8;
bool used[N][N] , column[N];

int ans = 0 ;

bool diagonals(int col , int row){
	for(int i = row , j = col ; i >= 0 && j>= 0 ; i-- , j--){
		if(used[i][j])
			return false;
	}
	for(int i = row , j = col ; i >= 0 && j < N ; i-- , j++){
		if(used[i][j])
			return false;
	}
	return true;
}


void place_queens(vector<vector<int>> &grid, int row) {
  if (row >= N) {
    ans++;
    return ;
  }
  for (int col = 0; col < N; col++) {
    if (grid[row][col] || column[col] || !diagonals(col, row))
      continue;
     column[col] = true;
     used[row][col] = true ;
     place_queens(grid, row + 1);
     column[col] = false;
     used[row][col] = false ;
  }
}

int main() {
  vector<vector<int>> grid(N, vector<int>(N, 0));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      char ch;
      cin >> ch;
      grid[i][j] = (ch == '*');
    }
  }
   place_queens(grid, 0);
  cout << ans ;
}