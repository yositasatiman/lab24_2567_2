#include<iostream>

using namespace std;

//Write function count() here.
int count(int data[],int size){
	set<int> numbers;

	for(int i = 0; i < size; ++i) {
        numbers.insert(data[i]);
    }

	return numbers.size();
}

int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}
