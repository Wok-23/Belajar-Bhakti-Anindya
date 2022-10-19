#include <iostream>
using namespace std;
int x;
int y;
int hasil;

int arr[10] = {60,61,62,63,64,65,66,67,68,69};
int multi[4][4] = {{4,7,8,9},{2,5,4,3},{2,7,8,3},{4,5,3,5}};

int i;
	

int main(){
	x= 5;
	cout<<x<<endl;
	cout<<arr[5]<<endl;
	cout<<arr[4]<<endl;
	
	cout<<multi[0][0]<<endl;
	cout<<multi[1][1]<<endl;
	cout<<multi[3][3]<<endl;
	x=multi[3][3];
	y=multi[2][2];
	hasil = x + y;
	cout<<hasil<<endl;
	
	cout<<endl;
	
	for(i=0;i<4;i++) {
		cout<<i<<endl;
	}
	
	cout<<endl;
	
	for(i=0;i>5;i++) {
		cout<<arr[i]<<endl;
	}
	
}

