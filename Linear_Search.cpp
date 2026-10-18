#include<iostream>
using namespace std;
 int main(){
 	int n=8; 
 	int key;
 	int counter=0;;
 	int count=0;
 	
 	int arr[8];
 	
 	
 	for(int i=0; i<n; i++){
 		cout<<"Enter the elements: "<<endl;
 		cin>>arr[i];
	 }
	 
	 cout<<"Enter the element you want to find in array: "<<endl;
	 cin>>key;
	 
	 for(int i=0; i<n; i++){
	 	count++;
	 	if(arr[i]==key){
	 		counter++;
	 		cout<<"Element found at index: "<<i<<endl;;
	 		
	 		cout<<"Elements checked: "<<count<<endl;;
	 		
	 		
		 }	 
	 }
	 
    if(counter == 0){
        cout << "Element not found!" << endl;
        cout << "Elements checked: " << count << endl;
    }
	 cout<<"Total occurences: "<<counter;

 	 return 0;
 	 
 }