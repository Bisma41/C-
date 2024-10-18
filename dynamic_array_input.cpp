#include <iostream>
using namespace std;

int main() {
    int a=0;
    int* arr1=new int[5];
    for(int i=0;i<5;i++)
	{
    	cin>>a;
    	arr1[i]=a;
	}
	for(int i=0;i<5;i++)
	{
		cout<<arr1[i]<<" ";
	}
    return 0;
}
