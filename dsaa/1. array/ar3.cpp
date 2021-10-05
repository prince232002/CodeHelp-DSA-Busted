#include<iostream>
using namespace std;
int binary_search(int arr[],int n, int key )
{
    int s=0;
    int e=n;
    while (s<=e){
        int mid = (s+e)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
      return -1;

}
int main(){

 int n,i;
 int arr[n];
 cin>>n;
 for (i=0; i<n; i++){
     cin>>arr[i];
 }
 int key;
 cout<<"enter the searching element :"<<endl;
 cin>>key;
 cout<<"the searching element "<<key<<" is at index ";
 cout<<binary_search(arr,n,key); 
return 0;
}