#include<iostream>
using namespace std;
 int main(){
 	
 	
 	int *ptr;
 	ptr = new int[5];
 	int sum=0;
 	int average;
 	
 	for(int i=0; i<5; i++){
 		
 		cout<<"Enter the numbers: "<<endl;
 		cin>>ptr[i];
 		
	 }
	 
	 cout<<"....Array....."<<endl;
	 
	 for (int i=0; i<5; i++){
	 	
	 	cout<<ptr[i]<<" ";
	 }
	 
	 for (int i=0; i<5; i++){
	 	
	 	sum+=ptr[i];
	 	
	 }
	 
	 average = sum/5;
	 
	 cout<<"\nSum of all numbers: "<<sum<<endl;
	 cout<<"Average : "<<average;
	 
	 delete[] ptr;
 	
 	return 0;
 }