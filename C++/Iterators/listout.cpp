#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={2,4,6,8};
  list<int> theList;

  for(int i=0;i<4;i++)
    theList.push_back(arr[i]);

  list<int>::iterator iter;

  for(iter=theList.begin();iter!=theList.end();iter++)
    cout<<*iter<<" ";
  cout<<endl;
  return 0;
}

//Data Access program
