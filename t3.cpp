#include <iostream>
using namespace std;

int n;
int numForRecursion = 2;
string constractor(int num, string symbol){
    string toBeReturned = "";
    for(int i=0; i<(n-num)/2; i++){
        toBeReturned += " ";
    }
    for(int i=0; i<num; i++){
        toBeReturned += symbol;
    }
    return toBeReturned;
}
void toPaint(int i){ 
    if(i<1){
            return;
    }
    cout << constractor(i, "*") << endl;
    if(i==n){
        numForRecursion *= -1;
    }
    toPaint(i+numForRecursion);
}
int main(){
	cout << "Write odd number between 1 and 19"<<endl;
	cin >> n;
	for (int i = 1; i <= n; i+=2){
	    cout << constractor(i, "*") << endl;
    }
    for (int i = n; i >= 1; i-=2){
	    cout << constractor(i, "*") << endl;
    }
    toPaint(1);
	return 0;
}


