#include<iostream>
using namespace std;


long long int binarysearch(int n){
    int start=0, end=n;
    long long int mid=start+(end-start)/2;
    long long int ans=-1;

    while(start<=end){
        long long int square=mid*mid;
        if(square==n){
            ans=mid;
            return ans;
        }
        if(square>n){
            end=mid-1;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
       
    }
    return ans;
}


double precision(int n,int decimals,int temp){
    double answer=temp;
    double factor=1;

    for(int i=0;i<decimals;i++){
        factor=factor/10;

        for(double j=answer;j*j<n;j=j+factor){
            answer=j;
        }
    }
    return answer;

}











int main()
{
    int n;
    cout<<"enter---->>"<<endl;
    cin>>n;
    int temp=binarysearch(n);
    cout<<precision(n,3,temp);
    return 0;
}
