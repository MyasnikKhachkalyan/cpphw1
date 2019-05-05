#include <iostream>
using namespace std;

int withoutRef (int num){
    return num*3;
}
void withRef(int& count){
    count*=3;
}

int main()
{
	int count; 
	cin >> count;
    int k = withoutRef(count);
    withRef(count);

    cout<<k<<endl<<count;

	return 0;
}