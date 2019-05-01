#include <iostream>
using namespace std;


int main()
{
	int n; 
    int sum=0;
	cout << "N is ";
	cin >> n;;
	for (int i = 1; i < n; i+=2)
		sum = sum+ i;
	cout << "sum is " << sum << endl;
	return 0;
}
//in case of the max num of n can be  32,767. as interval of int is -32.767;32.767
// case of unsinged int it is 65,535. as interval is 0;65,535