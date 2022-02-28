//
// Created by Administrator on 2022/2/27.
//
#include "iostream"
#include "vector"
using namespace std;
int main(){
    vector<int> temp = {1,2,3,4};
    temp.push_back(5);
    for(int i = 0; i< temp.size(); i++){
        cout<<temp[i]<<endl;
    }
    cout<<temp.size()<<endl;
    cout<<temp.capacity()<<endl;
    return 0;
}
