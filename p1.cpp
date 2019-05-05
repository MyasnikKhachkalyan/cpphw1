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
//for int ->  92680
//for unsingedint -> 185361
