#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    
    public:
    string name;
    int Korean;
    int English;
    int Math;
    
    Student(string,int,int,int);
};

Student::Student(string n,int k,int e,int m){
    name=n;
    Korean=k;
    English=e;
    Math=m;
}

bool compare(Student &a,Student &b){

    if(a.Korean>=b.Korean){
        if(a.Korean==b.Korean){
            if(a.English<=b.English){
               if(a.English==b.English){
                   if(a.Math==b.Math)
                        return a.name<b.name;
                   return a.Math>b.Math;
               }   
               return a.English<b.English;
            }
        }
        return a.Korean>b.Korean;
    }
    return a.Korean>b.Korean;
}
int main()
{
    
    int N;
    cin>>N;
    
    vector<Student> stu;
    
    for(int i=0;i<N;i++){
        string name;
        cin>>name;
        int K;
        cin>>K;
        int M;
        cin>>M;
        int E;
        cin>>E;
        
        stu.push_back(Student(name,K,M,E));
    }
    
    sort(stu.begin(),stu.end(),compare);
    
    for(int i=0;i<N;i++){
        cout<<stu[i].name<<"\n";
    }
    return 0;
}
