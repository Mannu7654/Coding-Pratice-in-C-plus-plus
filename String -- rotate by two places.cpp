// Given two strings a and b.
// The task is to find if the string 'b' can be obtained 
// by rotating (in any direction) string 'a' by exactly 2 places.

// For example: --- a= amazon and b= azonam then it returns 1

#include<bits/stdc++.h>
using namespace std;

bool rotateTwoPlace(string a, string b)
{
	if(a.length() != b.length())
	{
		return false;
	}
	
	string rotate= a.substr(2) + a.substr(0,2);
	
	if(rotate == b)
	{
		return true;
	}
	
	rotate= a.substr(a.length() - 2) + a.substr(0, a.length() -2);
	
	return rotate== b;
	
}

int main()
{
	string str1,str2;
	cout<<"Enter the 1st String: -- ";
	cin>>str1;
	cout<<"\n\nEnter the 2nd String: -- ";
	cin>>str2;
	
	cout<<"\n\n";
	
	if(rotateTwoPlace(str1,str2))
	{
		cout<<"Yes, 2nd string can be obtained by rotating 1st string by exactly 2 places."<<endl;
		
	}
	else
	{
		cout<<"No, 2nd string can not be obtained by rotating 1st string by exactly 2 places."<<endl;
	}
}
