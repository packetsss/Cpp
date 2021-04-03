#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
                
int findMaxForm(vector<string>& strs, int m, int n) {
	// dp[i][j] will store Max subset size possible with zeros_limit = i, ones_limit = j
	vector<vector<int> > dp(m + 1, vector<int>(n + 1));
	for(auto& str : strs) {
		// count zeros & ones frequency in current string            
		int zeros = count(begin(str), end(str), '0'), ones = str.length() - zeros; 
		// which positions of dp will be updated ?
		// Only those having atleast `zeros` 0s(i >= zeros) and `ones` 1s(j >= ones)
		for(int i = m; i >= zeros; i--)
			for(int j = n; j >= ones; j--)                    
				dp[i][j] = max(dp[i][j], // either leave the current string
							   dp[i - zeros][j - ones] + 1); // or take it by adding 1 to optimal solution of remaining balance
		// at this point each dp[i][j] will store optimal value for items considered till now & having constraints i and j respectively
	}
	return dp[m][n];
}

int main()
{   
    vector<string> s = {"10","0001","111001","1","0"};
    int m = 4;
    int n = 3;
    cout << findMaxForm(s, m, n);
}