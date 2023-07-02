//#include <iostream>
//#include <cstdlib>
//#include <ctime>

#include<bits/stdc++.h>
using namespace std;

static const char pass_generat[] =
"0123456789"
"!@#$%^&*"
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
"abcdefghijklmnopqrstuvwxyz";

int size = sizeof(pass_generat) - 1;

int main()
{
	//password length
	int length = 8;
	
	srand(time(0));
	cout<<"Your password is : ";
	for (int i = 0; i < length; i++)
	{
		cout <<pass_generat[rand() % size];
	}
	return 0;
}

