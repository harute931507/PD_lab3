#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector> 

using namespace std;

int main(){
	
	int L;
	vector<int> weight;
	int cow;
	int total = 0;
	
	ifstream fileIn( "file.in", ios::in);
	
	fileIn >> L;
	while( fileIn >> cow ){
		weight.push_back(cow);		
	}
	
	sort(weight.begin(),weight.end());
	
	for(int i= 0; i<5; i++){
		total +=weight.at(L-1-i);
	}

	cout << "The total weight of top five cows is " << total << endl;
	
	return 0;
}
