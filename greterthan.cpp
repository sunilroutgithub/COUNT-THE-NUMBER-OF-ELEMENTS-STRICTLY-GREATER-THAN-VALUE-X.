//COUNT THE NUMBER OF ELEMENTS STRICTLY GREATER THAN VALUE X.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(4 );

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    cout<<"Enter X:";
    int x;
    cin>>x;
int count =0;
    for(int i=0;i<v.size();i++){
    if(v[i] > x){
      count ++;
    }
    }
    cout<<count<<endl;
    return 0;

}