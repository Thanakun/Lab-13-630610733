#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	T key;
    for(int i = 1; i < N;i++){
    	key = d[i];
       if(key > d[i-1]){
		   for (int j = i -1;j >= 0; j--){
			   d[j+1] = d[j];
			   if(key <= d[j-1] || j==0){
				   d[j] = key;
				   break;
			   }
		   }
	   }
		cout << "Pass "<< i << ":";
		for(int j = 0; j < 10; j++) cout << d[j] << " ";
		cout << "\n";
    }
}

int main(){
	double a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
