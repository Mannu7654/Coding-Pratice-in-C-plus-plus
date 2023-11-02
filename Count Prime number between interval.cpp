// Count all the prime number between entered integer


#include <bits/stdc++.h> 
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int totalPrime(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
	{
        if (isPrime(i))
		{
            count++;
        }
    }
    
    return count;
    
}



int main() {
    int S, E;
    cout<<"Enter the starting number: -- > "<<endl;
    cin>>S;
    
    cout<<"\nEnter the last number: -- > "<<endl;
    cin>>E;


    cout << totalPrime(S, E);
    
    return 0;
}
