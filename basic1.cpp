#include <iostream>
using namespace std;

int array[6];

int main(){
    int arr[6];
    cout<<"elements present in the array declared in the main scope, which has only been declared and not initialized"<<endl<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    cout<<arr[5]<<endl<<endl;
    cout<<"elements present in the array declared outside the main scope, which has only been declared and not initialized"<<endl<<endl;
    cout<<array[0]<<endl;
    cout<<array[1]<<endl;
    cout<<array[2]<<endl;
    cout<<array[3]<<endl;
    cout<<array[4]<<endl;
    cout<<array[5]<<endl<<endl;

    cout<<"So, the conclusion we make here is::\n1. The array which is declared inside the main scope, gets initialized with some garbage values.\n2.The array which is declared outside the main scope, is initializes with zeroes all the time! :)"<<endl;

}