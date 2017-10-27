using namespace std;

int main() {
	int a,b;
	int* p;
	p=&a;
	b=*p;
	cout<<"Enter the values of a and b ";
	cin>>a>>b;
	cout<<"\nThe values of a,b and *p are "<<a<<" "<<b<<" "<<*p<<" respectively.";
	a=2,b=3;
            cout<<"\nThe values of a,b and *p are "<<a<<" "<<b<<" "<<*p<<" respectively.";
            p=&b;
            cout<<"\nThe values of a,b and *p are "<<a<<" "<<b<<" "<<*p<<" respectively.";
	return 0;
}
