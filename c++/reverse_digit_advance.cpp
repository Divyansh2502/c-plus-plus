#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n,b;
	int c=0;
	cout<<"Enter the number: ";
	cin>>n;
    int f=n;
    if(f%10 == 0)
    {
        f=n/10;
    }
    while(f!=0)
    {
        b=f%10;
        c=c*10 + b;
        f=f/10;
    }
    cout<<c;
}

	// while(n!=0)
	// {
	// 	a=n%10;
	// 	i++;
	// 	n=n/10;
    //     d=i;
	// }
	// for(int j=0;j<d;j++)
	// {
	// 	while(f%10 !=0)
	// 	{
	// 		b=f%10;
	// 		c=c*10 + b;
	// 		f=f/10;
	// 	}
	// 	f=f/10;
    //     cout<<c<<endl;
	// }
	// cout<<c;