#include <iostream>
using namespace std;

int main() {
	
	int n, px, py, mx, my;
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		
		cin >> px >> py >> mx >> my;
		
		int rx = (mx-px)*2 + px;
		int ry = (my-py)*2 + py;
		
		cout << rx << " " << ry << endl;
	}
	
	return 0;
}
