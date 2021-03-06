//cmake CMakeLists.txt
#include <cstdlib> 
#include <ctime>
#include <iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;
int binarySearch(int arr[], int l, int r, int x) 
{ 
	while (l <= r) { 
		int m = l + (r - l) / 2; 

		// Check if x is present at mid 
		if (arr[m] == x) 
			return m; 

		// If x greater, ignore left half 
		if (arr[m] < x) 
			l = m + 1; 

		// If x is smaller, ignore right half 
		else
			r = m - 1; 
	} 

	// if we reach here, then element was 
	// not present 
	return -1; 
} 
  

int main(){
	//SET(CMAKE_CXX_FLAGS "-std=c++11 -O3");
	int size=1000000000;
	int* arr = new int [size];
	
	for(int i=0; i<size; i++){
		arr[i]=i;
		//cout<< arr[i]<< " ";
	}
	cout<<endl;
	
	
	int x;
	cout<<"Masukan Angka yg ingin di cari: ";
	cin>>x;
	
auto start = high_resolution_clock::now();
	
	int result = binarySearch(arr, 0, size-1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result<<endl; 
				
		auto stop = high_resolution_clock::now();
	 auto duration = duration_cast<microseconds>(stop - start); 
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
	cout<<endl;
	system("pause");
	return 0;
}
