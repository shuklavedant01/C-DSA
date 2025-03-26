#include<iostream>
using namespace std;
void update(int arr[],int size){

    cout<<"inside the function"<<endl;
    arr[0]=120;


    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"going back the MAIN function"<<endl;
    cout<<endl;

}

int main()
{
    int arr[3]={1,2,3};
    update(arr,3);
    cout<<"Printing the main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
