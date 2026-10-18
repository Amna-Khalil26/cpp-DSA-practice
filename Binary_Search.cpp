#include<iostream>
using namespace std;
 int main(){
 	int n=8;
 	int key;
	int arr[8]; 
	int low =0;
	int high = n-1;
	
	cout<<"!!..Please enter the elements in sorted ascending or descending order..!!"<<endl;
	for(int i=0; i<n; i++){
		
 	cout<<"Enter the element: "<<endl;
 	cin>>arr[i];
 	
	 }
	 
 	cout<<"Enter the element you want to find in array: "<<endl;
	cin>>key;
	
	while(low<=high){
		int mid = low+(high-low)/2;
		
		if (arr[mid]==key){
			
			cout<<"Elemnt found at index: "<<mid;
			return 0;
		}
		else if(arr[mid]<key){
			
			low = mid+1;	
		}
		
		else{
			high=mid-1;
		}
	}
	
	cout<<"Element not found "<<endl;
	 
 	return 0;
	 }