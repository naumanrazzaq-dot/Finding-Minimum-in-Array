#include <iostream>

using namespace std;

int main()
{
    int arr[3];
  cout<<"Enter your first array int";
  cin>>arr[0];
  cout<<"eter your second array int";
  cin>>arr[1];
  cout<<"enter your third aray int";
  cin>>arr[2];

  int min=arr[0];
  for(int i=0 ; i<=2;i++){
    if(arr[i]<=min){
        min=arr[i];
       cout<<min;
       break;
    }

  }
    return 0;
}
