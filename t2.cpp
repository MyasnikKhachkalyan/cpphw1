#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int n; 
    double sum=0;
    int denom = -1;
	for (int i = 0; i < 1000; i++){
		sum = sum + 4.0/((denom+=2)*pow(-1, i));
	    cout << "sum is " << sum << " term is "<< i+1 << endl;
    }
	return 0;
}