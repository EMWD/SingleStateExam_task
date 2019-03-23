#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;


int main() {
	
	int OX, OY, x, y, coord, start, count = 3;
	int min_ran = 99999, min_point;
	int countA1 = 0 , countA2 = 0, countA3 = 0, countA4 = 0;

	cout << "Input count of points: " << endl;
	//cin >> count ;
	
	int mat[3][2];
	for (int i = 0; i < count; i++)
	{	
		cout << "Coords x ";
		cin >> mat[i][0];
		cout << "Coords y ";
		cin >> mat[i][1];
		cout << endl;
	}
	for (int w = 0; w < 3 /*3 or count*/; w++)
	{	
		if ((mat[w][0] == 0) || (mat[w][1] == 0)) {
			cout << "Zero coord is bad " << "point " << w + 1 << " is wrong " << endl;
			cout << "Point " << w + 1 << " not located in circle " << endl;
		}
		else if ((mat[w][0] > 0) && (mat[w][1] > 0)) {
			countA1 += 1;
			cout << "Point " << w + 1 << " in 1th part " << endl;
			if (abs(mat[w][0]) < min_ran) { min_ran = mat[w][0];  min_point = w + 1;}
			if (abs(mat[w][1]) < min_ran) { min_ran = mat[w][1];  min_point = w + 1;}
		}
		else if ((mat[w][0] < 0) && (mat[w][1] > 0)) {
			countA2 += 1;
			cout << "Point " << w + 1 << " in 2th part " << endl;
			if (abs(mat[w][0]) < min_ran) { min_ran = mat[w][0];  min_point = w + 1; }
			if (abs(mat[w][1]) < min_ran) { min_ran = mat[w][1];  min_point = w + 1; }
		}
		else if ((mat[w][0] < 0) && (mat[w][1] < 0)) {
			countA3 += 1;
			cout << "Point " << w + 1 << " in 3th part " << endl;
			if (abs(mat[w][0]) < min_ran) { min_ran = mat[w][0];  min_point = w + 1; }
			if (abs(mat[w][1]) < min_ran) { min_ran = mat[w][1];  min_point = w + 1; }
		}
		else if ((mat[w][0] > 0) && (mat[w][1] < 0)) {
			countA4 += 1;
			cout << "Point " << w + 1 << " in 4th part " << endl;
			if (abs(mat[w][0]) < min_ran) { min_ran = mat[w][0];  min_point = w + 1; }
			if (abs(mat[w][1]) < min_ran) { min_ran = mat[w][1];  min_point = w + 1; }
		}
	}

	for (int q = 0; q < count; q++)
	{
		cout << mat[q][0] << "   " << mat[q][1] << endl;
	}
		 if (countA1 > countA2 && countA1 > countA3 && countA1 > countA4)  cout << "more point in Area 1" << endl;
	else if (countA2 > countA1 && countA2 > countA3 && countA2 > countA4)  cout << "more point in Area 2" << endl;
	else if (countA3 > countA1 && countA3 > countA2 && countA3 > countA4)  cout << "more point in Area 3" << endl;
	else if (countA4 > countA1 && countA4 > countA2 && countA4 > countA3)  cout << "more point in Area 4" << endl;
	else cout << "No points" << endl; 

	cout << "Min rande to axis is " << min_ran << " in point: " << min_point << endl;
	cout << countA2;

	return 0;
}