#include<iostream>
using namespace std;
 int main(){
 	
 	int rows , col;
 	int sum = 0; 
 	int average;
 	
 	cout<<"Enter number of rows: "<<endl;
 	cin>>rows;
 	
 	cout<<"Enter number of col: "<<endl;
 	cin>>col;
 	
 	int **arr = new int*[rows];
 	
 	for(int i=0; i<rows; i++){
 		
 		arr[i] = new int[col];
	 }
	 
	cout << "Enter array elements:" << endl;
	  
	 for(int i=0; i<rows; i++){
	 	for(int j=0; j<col; j++){
	 		
	 		cin>>arr[i][j];
		 }
	 }
	 
	 cout << "2D Dynamic Array:" << endl;
	 
	 	 for(int i=0; i<rows; i++){
	 	for(int j=0; j<col; j++){
	 		
	 		cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 	 for(int i=0; i<rows; i++){
	 	for(int j=0; j<col; j++){
	 		
	 		sum+=arr[i][j];
		 }
	 }
	 
	 average = (float)sum/(rows*col);
	 
	 
	cout << "Sum of all elements: " << sum << endl;
    cout << "Average of all elements: " << average << endl;

    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;
	 
 	
 	
 	return 0;
 }