#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int &a,int &b){
    return a>b;
}
int main()
{
    
    int N;
    cin>>N;
    
    vector<int> tree;
    for(int i=0;i<N;i++){
        int t;
        cin>>t;
        tree.push_back(t);
    }
    
    sort(tree.begin(),tree.end(),compare);
    
    for(int i=1;i<=N;i++){
        tree[i-1]+=i;
    }
    
    cout<<*max_element(tree.begin(),tree.end())+1<<endl;
    return 0;
}

