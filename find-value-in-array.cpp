#include <iostream>
using namespace std;
int main() {
    int arr[3][3]={10,20,30,40,50,60,70,80,90};
    int r,c;
   int size=sizeof(arr)/sizeof(arr[0]);
    int value;
    cout<<"Enter the value to find: ";
    cin>>value;
    bool found=false;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
        if(arr[i][j]==value) {
            found=true;
            break;
        }
        }
        }
        if(!found)
        {
           cout<<"Value Not Found"<<"\n";
        }
        else{
            cout<<"Value found"<<"\n";
        }
    }



