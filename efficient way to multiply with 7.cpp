# include<bits/stdc++.h>

using namespace std;
//c++ implementation
long multiplyBySeven(long n)
{
	/* Note the inner bracket here. This is needed
	because precedence of '-' operator is higher
	than '<<' */
	return ((n<<3) - n);
}

/* Driver program to test above function */
int main()
{
	long n = 4;
	
	cout<<multiplyBySeven(n);

	return 0;
}
