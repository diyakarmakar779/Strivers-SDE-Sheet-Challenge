
#include <bits/stdc++.h>
using namespace std;


//Brute Force Approach
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}


//Optimal Approach
vector<long long int> generateRow(int row)
{
  long long int ans = 1;
  vector<long long int> ansRow;
  ansRow.push_back(1);

  for(int col=1;col<row;col++)
  {
    ans = ans*(row-col);
    ans = ans/col;
    ansRow.push_back(ans);

  }
  return ansRow;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;

  for(int row=1;row<=n;row++)
  {
    ans.push_back(generateRow(row));

  }

  return ans;
  // Write your code here.
}


int main()
{
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}

