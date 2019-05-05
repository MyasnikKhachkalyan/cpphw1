#include <iostream>
using namespace std;


int main()
{
	int n; 
    double avg;
    cin >> n;
    double tempArr[n][7];
    double tempArrFaren[n][7];
    double avgs[n];

    
	for (int i = 0; i < n; i++){
    	for (int j = 0; j < 7; j++){

		cin >> tempArr[i][j];

        }
    }
    for (int i = 0; i < n; i++){
    	for (int j = 0; j < 7; j++){

		 tempArrFaren[i][j] = (tempArr[i][j] * 9/5) + 32;

        }
    }
    for (int i = 0; i < n; i++){
        avg = 0;
    	for (int j = 0; j < 7; j++){

		 avg += tempArrFaren[i][j];
        }
        avgs[i] = avg; 
    }
    for (int i = 0; i < n; i++){
    	for (int j = 0; j < 7; j++){

		cout << tempArrFaren[i][j] << " ";

        }
        cout << avgs[i] << endl;
    }    

	return 0;
}
