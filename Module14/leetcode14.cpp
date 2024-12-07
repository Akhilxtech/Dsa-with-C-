// longest common prefix
#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main() {
    // vector<string> v;
    // v.push_back("flower");
    // v.push_back("flow");
    // v.push_back("flight");
//     cout<<"before sorting"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "<<endl;
//     }
//     sort(v.begin(),v.end());
//     cout<<"after sorting"<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" "<<endl;
//     }
//     o/p=before sorting
// flower
// flow
// flight
// after sorting
// flight
// flow
// flower
    int n;
    cout<<"enter the size of vector"<<endl;
    cin>>n;
    vector<string> v(n);
    cout<<"enter words"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(v.size()==1) cout<<v[0];
    sort(v.begin(),v.end());
    string first=v[0];
    string last=v[n-1];
    string s="";// blank string is string main jo character same hai usko dalte jayenge
    for(int i=0;i<min(first.size(),last.size());i++){// loop ko ya to first + last ke length tk chla lo ya phr first word ki length tk chla lo koi frak nhi padega kyuki utni baar loop chlega hi nhi kabhi kyuki hme character compare krne hai 
        if(first[i]==last[i]){
            s+=first[i];
        }else{
            break;
        }
    }
    cout<<"longest common prefix is:"<<s;
    return 0;
}