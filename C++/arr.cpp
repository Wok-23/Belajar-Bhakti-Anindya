#include <iostream>
using namespace std;

int arr[10] = {10,11,12,13,14,15,16,17,18,19};

int i;

int main()
{

	
	for(i=0;i<10;i++) {
		cout<<arr[i]<<endl;
		}
	
	for(i=0;i<10;i++) {
		cout<<arr[i]<<endl;
		
			if(arr[i]>15) {
			cout<<"Lulus"<<endl;
			}
			if(arr[i]<15) {
			cout<<" Tidak Lulus"<<endl;
			}
		}
}

