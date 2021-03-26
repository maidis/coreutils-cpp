#include <iostream>
#include <stdio.h>
#include <math.h>

/* Truncating */
using namespace std;

int truncate(float x1, double x2=0, int x3=0)
{
	if(x1 != 0){
		cout << "Truncating..." << endl;
		int y = (int)x1;
		cout << y << endl;
	}
	
	else if(x2 != 0){
		cout << "Truncating..." << endl;
		int y = (int)x2;
		cout << y << endl;
	}
	
	else if(x3 != 0){
		cout << "Truncating..." << endl;
		int y = (int)x3;
		cout << y << endl;
	}
	
	else{
		cout << "Err" << endl;
	}
}

int main(int argc, char *argv[])
{
	float x;
	cout << "Truncate function: ";
	cin >> x;
	truncate(x);
}