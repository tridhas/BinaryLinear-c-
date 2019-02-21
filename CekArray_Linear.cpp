#include<iostream>
#include<cstdlib>
#include <chrono>
#include<ctime>
using namespace std;
using namespace std::chrono;
// C++ code to linearly search x in arr[]. If x 
// is present then return its location, otherwise 
// return -1 


int linearSearch(int arr[], int n, int x) 
{ 
	
	for (int i = 0; i < n; i++)
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main() 
{ 
	int size=100000;
	int* arr = new int [size];
	for(int i=0; i<size; i++){
		arr[i] = (rand()%1000)+1;
		//cout<< arr[i]<< " ";
	}
	cout<<endl;
	
	int x;
	cout<<"Masukan Angka yg ingin di cari: ";
	cin>>x; 
	
	auto start = high_resolution_clock::now(); 
	
	int result = linearSearch(arr, size, x); 
	(result == -1)? cout<<"Element is not present in array"
				  :cout<<"Element is present at index " <<result<<endl; 
					
	auto stop = high_resolution_clock::now();
	 auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 

	system("pause");	
	return 0; 
} 
