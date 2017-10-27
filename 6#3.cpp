#include <iostream>
using namespace std;

int main() {
	int a[10],i;
	cout<<"Enter the elements of the array.\n";
	for(i=0;i<10;i++)
	cin>>a[i];
	cout<<"The array printed using normal index method is ";
	for(i=0;i<10;i++)
	cout<<a[i]<<" ";
	int* ptr=a;
	cout<<"\nThe array printed using pointer method is";
	for(i=0;i<10;i++)
	{cout<<" "<<*ptr;
	ptr++;}
	return 0;
}
