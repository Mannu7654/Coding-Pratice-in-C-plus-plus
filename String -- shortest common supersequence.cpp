// Shortest Common Supersequence

#include <bits/stdc++.h>
using namespace std;

int supersequence(string X, string Y)
{
    int m = X.length(), n = Y.length();
    int t[m + 1][n + 1];
        
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
     
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
			{
                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
            }
        }
    }
        
    return m + n - t[m][n];
  
}

int main()
{
	string str1,str2;
	cout<<"Enter 1st String: -- ";
	cin>>str1;
	cout<<"\nEnter 2nd String: -- ";
	cin>>str2;

    cout<<"\n\nThe length of the shortest common supersequence is "<< supersequence(str1,str2)<<endl;
    
    return 0;
}

